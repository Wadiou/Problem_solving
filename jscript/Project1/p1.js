const roads = [
    "Alice's House-Bob's House", "Alice's House-Cabin",
    "Alice's House-Post Office", "Bob's House-Town Hall",
    "Daria's House-Ernie's House", "Daria's House-Town Hall",
    "Ernie's House-Grete's House", "Grete's House-Farm",
    "Grete's House-Shop", "Marketplace-Farm",
    "Marketplace-Post Office", "Marketplace-Shop",
    "Marketplace-Town Hall", "Shop-Town Hall"
    ];
function creategraph (edges)
{
    const mappedeges = edges.map(r => r.split('-'));
    graph = Object.create(null)
    function addedges(from , to)
    {
        if (!graph[from]) {
            graph[from]=[to];
            
        } else {
            graph[from].push(to)
        }
    }
    for (const arr of mappedeges) {
        addedges(arr[0],arr[1])
        addedges(arr[1],arr[0])
    }
    return graph;
}

const roadgraph = creategraph(roads);    
function randompick(arr)
{
    return arr[Math.floor(Math.random() * arr.length)];
}

class VillageState
{
    constructor(place ,parcels)
    {
        this.place = place
        this.parcels = parcels
    }
    move(destination)
    {
        if(!roadgraph[this.place].includes(destination))
        {
            return this;
        }
        else
        {
            let parcels = this.parcels.map(p => {
                if (p.place != this.place) return p;
                return {place: destination, address: p.address};
                }).filter(p => p.place != p.address);
                return new VillageState(destination, parcels);
        }
    }
    static random( parcelsnumber = 5) 
    {
        let parcels = [] , address , place;
        while (parcelsnumber != 0) {
            address = randompick(Object.keys(roadgraph));
            do {
                place = randompick(Object.keys(roadgraph));
            } while (place === address);
            parcels.push({place , address})
            parcelsnumber--;
        }
        return new VillageState("Post Office",parcels)
    }
   
      

}
function findpath(from , to) {
    let paths = [{at:from,path :[]}]
    for (let index = 0; index < paths.length; index++) {
        let {at ,path } = paths[index];
        for (let place of roadgraph[at]) {
            if (place === to) { return path.concat(place);
            }
            if (paths.every(p => p.at != place)) {
                paths.push({at : place , path: path.concat(place)});   
            }
        }           
    }
    return null;
}
function goalOrientedRobot(state, route) {
    if (route.length == 0) {
      let parcel = state.parcels[0];
      if (parcel.place != state.place) {
        route = findpath(state.place, parcel.place);
      } else {
        route = findpath( state.place, parcel.address);
      }
    }
    return {direction: route[0], memory: route.slice(1)};
  }
  const mailRoute = [
    "Alice's House", "Cabin", "Alice's House", "Bob's House",
    "Town Hall", "Daria's House", "Ernie's House",
    "Grete's House", "Shop", "Grete's House", "Farm",
    "Marketplace", "Post Office"
    ];
  function fixedRobot(state,memory)
  {
    if (memory.length ===0) {
        memory = mailRoute
    }
    return {direction : memory[0], memory : memory.slice(1)}
  }
function RunRobot(state,robot,memory)
{
    for (let i = 0;; i++) {
        if (state.parcels.length === 0) {
            return i ;
        }
        let action = robot(state,memory);
        state = state.move(action.direction)
        memory = action.memory
    }
}
function Tasks(N)
{
    let arr= [];
    for (let i = 0; i < N; i++) {
        arr.push(VillageState.random(5))
    }
    return arr;
}
function efficientRobot({place, parcels}, route) {
    if (route.length == 0) {
        let routes = parcels.map(parcel => {
            if (parcel.place != place) {
                return {route: findpath(place, parcel.place), pickUp: true, parcel};
            } else {
                return {route: findpath(place, parcel.address), pickUp: false, parcel};
            }
        });

        function score({route, pickUp}) {
            return (pickUp ? 0.5 : 1) * route.length;
        }
        route = routes.reduce((a, b) => score(a) < score(b) ? a : b).route;
    }
    return {direction: route[0], memory: route.slice(1)};
}

function Comparerobots(...args)
{
    for (let i = 0; i < args.length; i++) {
        args[i] = [args[i],0]
    }
    let tasks = Tasks(100) 
    for (const task of tasks) {
        for (let i = 0; i < args.length; i++) {
            args[i][1]+=RunRobot(task,args[i][0],[])}
    }
    mappedargs = args.map((element) => element[1]/tasks.length )
    mappedargs.forEach((element,index) => console.log(`Robot number ${index +1} average : ${element.toFixed(2)} Moves per task`))
}
Comparerobots(goalOrientedRobot,fixedRobot,efficientRobot)
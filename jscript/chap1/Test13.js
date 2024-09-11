const characters = [
    {
        name: 'Luke Skywalker',
        height: '172',
        mass: '77',
        eye_color: 'blue',
        gender: 'male',
    },
    {
        name: 'Darth Vader',
        height: '202',
        mass: '136',
        eye_color: 'yellow',
        gender: 'male',
    },
    {
        name: 'Leia Organa',
        height: '150',
        mass: '49',
        eye_color: 'brown',
        gender: 'female',
    },
    {
        name: 'Anakin Skywalker',
        height: '188',
        mass: '84',
        eye_color: 'blue',
        gender: 'male',
    },
];
function splitbyspace (str)
{
    str2 = ""
    for (let index = 0; index < str.length; index++) {
        if (str[index] != " ")
        {
            str2 += str[index];
            continue;
        }
        break;
    }
    return str2;
}
let arr = characters.map(characters => characters.mass);
for (const iterator of arr) {
    console.log(iterator);
    
}
const eyes = characters.reduce( function(a,b) {
   a[b.eye_color] ? a[b.eye_color]++ : a[b.eye_color] = 1;
    return a ;
},{} );
console.log(eyes);
characters.filter(characters => characters.mass >= 100).forEach(element => {
    console.log(element.name);
    
});
//console.log(characters.sort((a,b) => a.name > b.name ? 1 : -1));
console.log(characters.every(characters => characters.mass >= 100));
let horseShoe = "🐴👟";
console.log(horseShoe.codePointAt(0));
let arr3 = [[1,2,3] , [1,2] ,[4,1,7]], k = 0 , arr5 = [];
for (let i = 0; i < arr3.length; i++) {
    for (let j = 0; j < arr3[i].length; j++) {
        arr5[k++] = arr3[i][j];
        
    }    
}
arr5.forEach(element => { console.log(element);
    
});
let arr4 = arr3.reduce
console.log([1,2].concat([2,2]));
function every(item , condition)
{
    return !item.some(n => !condition(n));
}
console.log(every(arr5,n => n <10));
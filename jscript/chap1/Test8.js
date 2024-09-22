console.log(null);
const power = x => x*x;
let pow = function(x) {return x*x*x}
console.log(power(4));
let arr = [];
for (let i = 0; i < 5; i++) {
    arr.push(i*i);
    
}
let obj = {
    arr , squi: false 
}
console.log(obj.arr);
Object.assign(obj ,{arr: [1,0,3]})
console.log(obj.arr);



let ages ={
    walid : 15,
    wadoud : 20,
    zaki : 19
}
console.log( ages["wadoud"]);
console.log(ages.wadoud);
console.log("wadoud" in ages);
ages = new Map();
ages.set("wadoud" , 19)
console.log(ages.get("wadoud"));
ages.set("wadoud" , 18)
console.log(ages.get("wadoud"));
console.log(ages.has("hello"));
arr = []
arr[0 ] = 1
console.log(arr[0]);

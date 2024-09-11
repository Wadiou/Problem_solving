let array = [1, 2, 3];

let result = array.map( (num) => 
  ++num
  // No return statement, so this implicitly returns undefined
);

console.log(result); // Output: [Promise, Promise, Promise]



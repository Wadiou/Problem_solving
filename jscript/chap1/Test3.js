const prompt = require('prompt-sync')();

let char ;
let size = Number(prompt("Enter the size: "));
for (let i = 0; i < size; i++) {
    char = "";
    for (let j = i; j < size+i; j++) {
        if (j % 2 === 0) {
            char += " ";
        } else {
            char += "#";
        }
    }
    console.log(char);
}
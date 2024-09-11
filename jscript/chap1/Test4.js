const prompt = require('prompt-sync')();
let N = Number(prompt("Enter the value of N : "));
let text ;
const pyramid = (N) =>
{
    for (let i = 1; i <= N; i++) {
        text = '';
        for (let j = N-i; j >=1; j--) {
            text += " ";
        }
        for (let k = 1; k <=(2*i)-1; k++) {
            text += "*";
        }
        console.log(text);
    }
}
pyramid(N);
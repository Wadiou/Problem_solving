const prompt = require('prompt-sync')();
let N = Number(prompt("Enter a Number : "));
function findSolution(target)
{
    function find(current , history)
    {
        if (current == target) {
            return history;
        } else if(current > target){ return "";
            
        }
        else {
            return find(current+5 , history + "+5") || find(current*3 , "("+history + "*3)");

        }
    }
    return find(1,"1");
}

console.log(findSolution(N)==="" ? "There is no path" : findSolution(N));
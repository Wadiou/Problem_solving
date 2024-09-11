function range(start , end)
{
    let array = [];
    for (let i = start; i <= end; i++) {
        array.push (i);
    }
    return array;
}
function sum (arr)
{
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
        
    }
    return sum;
}


console.log(sum(range(1,10)));
function reverse(string)
{
    let str = ""; 
    for (let i = 0; i < string.length; i++) {
        str += string[string.length-1-i]
        
    }
    return str;
}
console.log(reverse("Hello"));
for(let c of "Hello")
{
    console.log(c);
}
function display(...args)
{
    console.log(...args);
    args.reduce()
}
display (5,4,2,4);

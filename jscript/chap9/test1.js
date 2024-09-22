//const prompt = require('prompt-sync')();
/*let input = prompt("Enter an email: ")
let input2 = prompt("Enter a Date: ")

let reg1 = /\w+@\w*\.\w{2,]/ , reg2 = /\d{1,2}-\d{1,2}-\d{1,4}/
console.log(reg1.test(input));*/
//console.log(/bad(ly)*/.exec("bad")[3]); // → ["bad", undefined]

console.log(date = new Date(2019,1,1));
console.log(date.getFullYear());  // 2023
console.log(date.getMonth());     // 0 (January)
console.log(date.getDate());      // 1
console.log(date.getHours());     // 10
console.log(date.getMinutes());   // 30
console.log(date.getSeconds());   // 15
console.log(/]/i.test("]]"));
console.log(/\bhello\b/i.test("Hello world"));
console.log(/\bhello\b/i.test("worldHello"));
console.log(/\bhello\b/i.test("world hello"));
console.log(/^\bhello\b/i.test("Helloworld"));
console.log(/\bhello\b$/i.test("Hello world"));
console.log(/\bhello\b$/i.test("worldHello"));
console.log(/\bhello\b$/i.test("world hello"));
console.log(/\b([01]+b|[\da-f]+h|\d+)\b/.test("103"));
console.log(/\bhello\b/.test("rhello "));
console.log("hello|world".replace(/(\w+)\|(\w+)/,"$1 $2"));
"1 lemon, 2 cabbages, and 101 eggs".match(/(\d+) (\w+)/g).forEach(element => console.log(element));
console.log(/(\d+) (\w+)/g.exec("1 lemon, 2 cabbages, and 101 eggs"))
console.log(/(\d+) (\w+)/g.exec("1 lemon, 2 cabbages, and 101 eggs"))
let regex = /(\d+) (\w+)/g;
let str = "1 lemon, 2 cabbages, and 101 eggs";
/*let match;
console.log(regex.exec(str));
console.log(regex.exec(str));
console.log(regex.exec(str));
console.log(regex.exec(str));
regex2 = /(\d+) (\w+)/g;
console.log(regex2.exec(str));
console.log(regex2.exec(str));
console.log(regex2.exec(str));
console.log(regex2.exec(str));
console.log(regex2.exec(str));
/\b([+-]?\d*)?(\.\d+)(e-?\d+)\b/*/
let name    = "dea+hl[]rd";
let text    = "This dea+hl[]rd guy is super annoying.";
let escaped = name.replace(/[\\[.+*?(){|^$]/g, "\\$&");
let regexp1 = new RegExp("\\b" + escaped + "\\b", "gi");
console.log(text.replace(regexp1, "_$&_"));
    regex2 = /(\d+) (\w+)/g;
let regexp = new RegExp("\\b(" + name + ")\\b", "gi");
console.log(str.replace(regex2 , str => str.toUpperCase()));








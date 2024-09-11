let name = "dea+hl[]rd";
let escaped = name.replace(/[\\[.+*?(){|^$]/g, "\\$&");
let text = "This dea+hl[]rd guy is super annoying.";
console.log(name,escaped);
let regexp = new RegExp("\\b" + escaped + "\\b", "gi");
console.log(text.replace(regexp, "_$&_"));
console.log("hello".slice(0));



const prompt = require("prompt-sync")();
N = Number(prompt("hello"));
for (let i = 0; i < 10; i++) {
	let row = ""; // Initialize an empty string for the row
	for (let j = 0; j <= i; j++) {
		row += "*"; // Append an asterisk to the row
	}
	console.log(row); // Print the row
}

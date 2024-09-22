const prompt = require('prompt-sync')();
class Inputerror extends Error {}
function promptDirection(question) {
    let result = prompt(question);
    if (result.toLowerCase() == "left") return "L";
    if (result.toLowerCase() == "right") return "R";
    throw new Inputerror("Invalid direction: " + result);
  }

  for (;;) {
    try {
      let dir = promptDirection("Where?"); // ← typo!
      console.log("You chose ", dir);
      break;
    } catch (e) {
      if (e instanceof Inputerror) {
        // Handle the typo or other reference errors differently
        console.log("There was a technical error. Please contact support.");
        break; // Exit the loop to avoid infinite loop
      } else {
        // Handle expected input errors
        throw e;
      }
    }
  }
let speak = function(text)
{
    console.log(`The rabit ${this.type} sayin ${text}`);
}
let hungryrabit = {type : "white" , speak}
let happyrabit = {type : "black" , speak}
greenrabit = Object.create(hungryrabit);
greenrabit.type = "green"
greenrabit.speak("brrrrrr")
speak.call(happyrabit,"meow")
function Dog(type)
{
    this.type = type;
}
Dog.prototype.speak = function(line)
{
    console.log(`the ${this.type} Dog says ${line}`);
}
blackdog = new Dog("Black")
blackdog.speak("woooof")
class Cat{
    constructor(type)
    {
        this.type = type;
    }
    speak(line) 
    {
        console.log(`the ${this.type} Cat says ${line}`);
    }
}
whitecat = new Cat("White")
whitecat.speak("mow")
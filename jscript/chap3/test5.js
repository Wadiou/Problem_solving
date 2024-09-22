function createCounter() {
    let counter = 0;
    return function() {
        counter += 1;
        console.log(counter);
    };
}

const counter = createCounter();

counter();  
counter();  
counter();  

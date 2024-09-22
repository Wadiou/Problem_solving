let i = 0;

function displayNumber() {
    console.log(i);
    
    if (i >= 10000) {
        console.log("stop.");
        return;
    }
    
    let delay;

    if (i < 500) {
        delay = 10 + (500 - i) * 0.1; // Slow start
    } else if (i >= 500 && i < 9000) {
        delay = 10 - i/1000; // Fast speed in the main sequence
    } else if (i >= 9000 && i <= 9998) {
        delay = 10 + (i - 9000) * 0.005; // Gradual slowdown
    } else {
        delay = 1500; // Dramatic pause between 9998 and 10000
    }

    i++;
    setTimeout(displayNumber, delay);
}

displayNumber();

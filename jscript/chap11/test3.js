function task1(shouldReject) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if (shouldReject) {
                reject("Task 1 failed");
            } else {
                console.log("Task 1 finished");
                resolve();
            }
        }, 1000);
    });
}

function task2(shouldReject) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if (shouldReject) {
                reject("Task 2 failed");
            } else {
                console.log("Task 2 finished");
                resolve();
            }
        }, 1500);
    });
}

function task3(shouldReject) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if (shouldReject) {
                reject("Task 3 failed");
            } else {
                console.log("Task 3 finished");
                resolve();
            }
        }, 1800);
    });
}

// Chaining the promises with error handling
task1(false)
    .then(() => task2(false))
    .then(() => task3(true))
    .then(() => console.log("All finished"))
    .catch((error) => {console.error(error) ;return task2(false);})
    .then(() => console.log("something else")
    )
    console.log("hello");
    

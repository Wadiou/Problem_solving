// Using Promises with Resolve and Reject
function task1(shouldReject) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if (shouldReject) {
                reject("Task 1 failed");
            } else {
                console.log("Task 1 finished");
                resolve("3alaoui");
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
                resolve("7abib kalbi");
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
                resolve("abo 7asoni");
            }
        }, 1800);
    });
}

// Chaining the promises with error handling


// Using Async/Await with Try/Catch
async function runTasks() {
    try {
        await task1(false);
        await task2(false);
        await task3(false);
        console.log("All finished");
    } catch (error) {
        console.error(error);
    }
}

// Call the async function to run the tasks
runTasks();

// Promise.all([task1(false),task2(false),task3(false)]).then((values) => console.log(values) , (values) => console.error(values)

// )




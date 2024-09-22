function task1(nextTask) {
    return () => {
        setTimeout(() => {
            console.log("Task 1 finished");
            if (nextTask) nextTask();
        }, 1000);
    };
}

function task2(nextTask) {
    return () => {
        setTimeout(() => {
            console.log("Task 2 finished");
            if (nextTask) nextTask();
        }, 1500);
    };
}

function task3(nextTask) {
    return () => {
        setTimeout(() => {
            console.log("Task 3 finished");
            if (nextTask) nextTask();
        }, 1800);
    };
}

task1(task2(task3(() => console.log("All finished"))))();

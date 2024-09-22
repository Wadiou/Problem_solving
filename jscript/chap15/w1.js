// worker.js
self.onmessage = function(e) {
    const data = e.data;
    let result = 0;

    // Perform some heavy computation
    for (let i = 0; i < data.iterations; i++) {
        result += i;
    }

    // Send the result back to the main thread
    self.postMessage(result);
};

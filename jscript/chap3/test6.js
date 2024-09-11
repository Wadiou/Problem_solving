function isEven(n) {
    if (n % 1 !== 0 || n < 0)
        return false
    if (n === 0) {
        return false;

    } else if (n === 1) {
        return true;

    }
    else {
        return isEven(n - 2);
    }
}
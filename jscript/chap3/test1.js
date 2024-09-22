function value(a,b)
{
    for (let i = 0; i < b; i++) {
        a(i);
    }
}
value(console.log,4)
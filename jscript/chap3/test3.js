function countdown(N)
{
    if(N >=0) {
        console.log(N);
        countdown(N-1);
    }
}
countdown(5);
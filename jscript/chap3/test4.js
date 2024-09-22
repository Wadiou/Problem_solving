function create()
{
    let m = 0
    return function inc()
    {
        m ++;
        let n=m;
        function countdown(n)
        {
            if(n >=0) {
                console.log(n);
                countdown(n-1);
            }
        }
        countdown (n);
    }

}
let incrementation = create();
incrementation();
incrementation();
incrementation();
incrementation();

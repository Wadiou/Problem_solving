function outer()
{
    let a = 2;
    function inner()
    {
        a=a*a;
        console.log(a);
    }
    inner();
}
outer();
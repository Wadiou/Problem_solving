function* factorial(n)
{
    for (let curent = n , i= 1;curent <= 1000;curent *= n+i , i++ ) {
        yield curent;
        
    }
}
console.log(factorial(1));

for (const fac of factorial(1)) {
   
    console.log(fac);
    
}
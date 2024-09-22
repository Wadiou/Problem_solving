function accepted(accept)
{
    return new Promise(
        (resolve,reject) => {
            if (accept) {
                resolve("You're accepted")
            } else {
                reject("You are rejected")
            }
        }
    )
}
let std = accepted(true).then(value => {console.log(value);
    return accepted(false);
}).catch(reason => {console.log(reason) ;return accepted(true)} 
).then(value => console.log("rached the end")
)
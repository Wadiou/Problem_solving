class Vector {
    constructor(x, y) {
        this.x = x;
        this.y = y;
    }

    add(vector) {
        this.x += vector.x;
        this.y += vector.y;
    }

    minus(vector) {
        this.x -= vector.x;
        this.y -= vector.y;
    }

    getlength() {
        return Math.sqrt(this.x * this.x + this.y * this.y);
    }
}

let vec1 = new Vector(2, 3);
let vec2 = new Vector(1, 1);
vec1.add(vec2);
console.log(vec1); 
console.log(vec1.getlength()); 

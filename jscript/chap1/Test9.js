let createBook = function(title , author , pages) {return {
    title : title,
    author : author , 
    pages : pages , 
    printDetails: function() {
        console.log(`Book's information: \n Title: ${this.title} \n Author: ${this.author} \n Pages: ${this.pages}`);
    } };
};
let books = [
    createBook("1984", "George Orwell", 328),
    createBook("To Kill a Mockingbird", "Harper Lee", 281),
    createBook("The Great Gatsby", "F. Scott Fitzgerald", 180)
];
for (let book of books) {
    book.printDetails();    
}

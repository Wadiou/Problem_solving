package Test1;


public class Book {
    private String title;
    private String author;
    private String isbn;
    private boolean isAvailable;
    public Book(String title ,String author , String isbn)
    {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
        this.isAvailable = true;
    }
    public void borrowBook(){this.isAvailable = false;}
    public void returnBook(){this.isAvailable = true;}

    public void displayInfo()
    {
        System.out.println("Books info :");
        System.out.println("Title : " + this.title);
        System.out.println("Author : " + this.author);
        System.out.println("ISBN : " + this.isbn);
        System.out.println("Availability : " + (this.isAvailable? "Available" : "Not available"));

    }



}

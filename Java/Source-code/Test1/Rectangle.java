package Test1;
import static java.lang.Math.*;
public class Rectangle {
    private double width;
    private  double height;
    public Rectangle()
    {
        this.height =1;
        this.width = 1;
    }
    public Rectangle(double size)
    {
        this.height =size;
        this.width = size;
    }
    public Rectangle(double height , double width)
    {
        this.height =height;
        this.width = width;
    }
    public double getArea()
    {
        return this.height * this.width;
    }
    public double getPerimeter()
    {
        return 2*(this.height + this.width);
    }

    public double getDiameter ()
    {
        return sqrt(pow(this.height,2)+pow(this.height,2));
    }
    public void display()
    {
        System.out.println("Info about this rectangle : ");
        System.out.println("Width" + this.width);
        System.out.println("Height" + this.height);
        System.out.println("Area : " + getArea());
        System.out.println("Perimeter : " + getPerimeter());
        System.out.println("Perimeter : " + getDiameter());




    }

}
class Test_Rectangle
{
    public static void main(String [] args)
    {
        Rectangle rectangle1 = new Rectangle() , rectangle2 = new Rectangle(2) , rectangle3 = new Rectangle(3,2);
        rectangle1.display();
        rectangle2.display();
        rectangle3.display();
    }
}


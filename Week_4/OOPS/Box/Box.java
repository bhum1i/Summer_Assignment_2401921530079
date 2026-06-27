package Week_4.OOPS.Box;

public class Box {
    protected double length;
    protected double breadth;

    Box(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }

    public double area(){
        return length*breadth;
    }
}

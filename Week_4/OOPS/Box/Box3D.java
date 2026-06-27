package Week_4.OOPS.Box;

public class Box3D extends Box {
    protected double height;

    Box3D(double length, double breadth, double height){
        super(length, breadth);
        this.height = height;
    }

    public double volume(){
        return length*breadth*height;
    }
}

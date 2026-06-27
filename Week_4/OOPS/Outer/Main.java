package Week_4.OOPS.Outer;

public class Main {
    public static void main(String[] args) {
        Outer OutObj = new Outer();
        OutObj.display();
        Outer.Inner InObj = OutObj.new Inner();
        InObj.display();
    }

}

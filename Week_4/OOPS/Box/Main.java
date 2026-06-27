package Week_4.OOPS.Box;

public class Main {
    public static void main(String[] args) {
        Box3D b = new Box3D(5, 4, 3);
        System.out.println(b.area());
        System.out.println((b.volume()));
    }
}

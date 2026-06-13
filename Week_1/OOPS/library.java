abstract class LibraryUser {
    abstract void registerAccount();
    abstract void requestBook();
}

class KidUsers extends LibraryUser {
    private int age;
    private String bookType;

    public KidUsers(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age <= 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } 
        else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equals("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } 
        else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUsers extends LibraryUser {
    private int age;
    private String bookType;

    public AdultUsers(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } 
        else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equals("Fiction")) {
            System.out.println("Book issued successfully, please return the book within 7 days");
        } 
        else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class library {
    public static void main(String[] args) {

        LibraryUser kid1 = new KidUsers(10, "Kids");
        kid1.registerAccount();
        kid1.requestBook();

        LibraryUser kid2 = new KidUsers(18, "Fiction");
        kid2.registerAccount();
        kid2.requestBook();

        LibraryUser adult1 = new AdultUsers(5, "Kids");
        adult1.registerAccount();
        adult1.requestBook();

        LibraryUser adult2 = new AdultUsers(23, "Fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}
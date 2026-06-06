#include<bits/stdc++.h>
using namespace std;
class LibraryUser{
    public:
        virtual void registerAccount()=0;
        virtual void requestBook()=0;
    virtual ~LibraryUser() = default;
};


class KidUsers: public LibraryUser{
    public:
        int age;
        string bookType;
    public:
        void registerAccount() override{
            if(age<=12){
                cout << "You have successfully registered under a Kids Account" << endl;
            }
            else if(age>12){
                cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
            }
        }

        void requestBook() override{
            if(bookType=="Kids"){
                cout << "Book Issued successfully, please return the book within 10 days" << endl;
            }
            else{
                cout << "Oops, you are allowed to take only kids books" << endl;
            }
        }
};

class AdultUsers: public LibraryUser{
    public:
        int age;
        string bookType;
    public:
        void registerAccount() override{
            if(age>12){
                cout << "You have successfully registered under an Adult Account" << endl;
            }
            else if(age<=12){
                cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
            }
        }

        void requestBook() override{
            if(bookType=="Fiction"){
                cout << "Book issued successfully, please return the book within 7 days" << endl;
            }
            else{
                cout << "Oops, you are allowed to take only adult Fiction books" << endl;
            }
        }

};

int main()
{
    KidUsers kid1;
    kid1.age = 10;
    kid1.bookType = "Kids";
    kid1.registerAccount();
    kid1.requestBook();

    KidUsers kid2;
    kid2.age = 18;
    kid2.bookType = "Fiction";
    kid2.registerAccount();
    kid2.requestBook();

    AdultUsers adult1;
    adult1.age = 5;
    adult1.bookType = "Kids";
    adult1.registerAccount();
    adult1.requestBook();

    AdultUsers adult2;
    adult1.age = 23;
    adult1.bookType = "Fiction";
    adult1.registerAccount();
    adult1.requestBook();

    return 0;
}
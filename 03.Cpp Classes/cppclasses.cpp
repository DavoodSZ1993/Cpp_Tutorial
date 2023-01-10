#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*The public keyword is an access specifier, which specifies that members (attributes and methods) of the class
are accessible from outside the class. */

class MyClass {
    public:
        string name;
        int age;

        void mymethod(){                         // An inside method with no input and no output.
            cout << "Hello World!" << endl;
        }
};                                                // semicolon is required for each class.


/*A constructor is a special method that is automatically called when an object of a class is created. */
/*To create a constructor, use the same name as the class, followed by ()*/

class Car {
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

/* Access specifiers:
   1. public: accessible from outside the class.
   2. private: not accessible from outside the class. The default specifier, when no specifier is considered.
   3. protected: not accessible from outside the class, but can be accessed in inherited classes.*/

// encapsulation
class Employee {
    private:
        int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

// Inheritance: to inherit from a class, use : symbol.
class Vehicle {
    public:
        string brand = "Ford";

        void hunk(){
            cout << "Tuut, Tuut!";
        }
};

class Car1: public Vehicle{
    public:
        string model = "Mustang";
};

int main(){

    // a simple class
    MyClass MyObj;

    MyObj.name = "Davood";
    MyObj.age  = 29;

    cout << "My name is " << MyObj.name << " and I am " << MyObj.age << " years old." <<endl;

    MyObj.mymethod();

    cout << "*************************************" <<endl;

    // Class with a constructor
    Car mycar1("BMW", "X5", 1999);
    Car mycar2("Ford", "Mustang", 1969);

    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year <<endl;
    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year <<endl;

    cout << "*************************************" <<endl;
    
    // Encapsulation
    Employee myobj1;

    myobj1.setSalary(2000);
    cout << myobj1.getSalary() <<endl;

    cout << "*************************************" <<endl;
    
    //Inheritance
    Car1 mycar3;

    mycar3.hunk();
    cout << mycar3.brand << " " << mycar3.model <<endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    // creating reference
    string food = "pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    // memory Address
    string food1 = "Sandwich";

    cout << &food1 << endl;

    // Pointers
    string food2 = "Pork";
    string* ptr = &food2;

    cout << food2 << endl;
    cout << &food2 << endl;
    cout << ptr << endl;
    cout << *ptr << endl;


    return 0;
}
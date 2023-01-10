#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    // Defining array
    string cars[4];

    cars[0] = "BMW";
    cars[1] = "Ford";
    cars[2] = "Benz";
    cars[3] = "Mazda";

    cout << cars[1] <<endl;

    // Loop over array elements
    for(int i = 0; i < 4; i++){
        
        cout << i << " = " << cars[i] <<endl;
    }

    // for-each loop in array's elements
    for (string car: cars){

        cout << car <<endl;
    }

    // Omit array size
    string models[] = {"Nokia", "IPhone", "Samsung"};

    // Multi-dimensional arrays
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };



    return 0;
}

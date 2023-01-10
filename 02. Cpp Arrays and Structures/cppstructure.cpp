#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct car{
    
    string brand;
    string model;
    int year;
};


int main(){

    car Mycar1;

    Mycar1.brand = "BMW";
    Mycar1.model = "X5";
    Mycar1.year = 1999;

    car Mycar2;

    Mycar2.brand = "Ford";
    Mycar2.model = "Mustang";
    Mycar2.year = 1969; 

    cout << Mycar1.brand << " " << Mycar1.model << " " << Mycar1.year << "\n";
    cout << Mycar2.brand << " " << Mycar2.model << " " << Mycar2.year << "\n";

    return 0;
}
#include <iostream>

using namespace std;

// function prototypes
void area_circle();
double cal_area_circle(double radius);
void volume_cylinder();
double cal_vol_cylinder(double radius, double height);


int main(){

    area_circle();
    volume_cylinder();





    return 0;
}

const double pi {3.14159};

void area_circle(){
    double radius{};
    cout << "\nEnter the radius of the circle:";
    cin >> radius;

    cout << "The area of the circle with radius " << radius << " is " << cal_area_circle(radius) << endl;
}

double cal_area_circle(double radius){
    return pi * radius * radius;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << cal_vol_cylinder(radius, height) << endl;
}

double cal_vol_cylinder(double radius, double height){
    return cal_area_circle(radius) * height;
}
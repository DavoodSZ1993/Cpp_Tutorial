#include <iostream>
using namespace std;


int main(){

    int num{10};

    cout << "Value of num is: " << num << endl;
    cout << "Sizeof of num is: " << sizeof num << " bytes." << endl;
    cout << "Address of num is: " << &num << endl;

    return 0;
}
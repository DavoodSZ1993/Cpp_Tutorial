#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void myfunc(){              // Void means the function would not return any value.

    cout << "I just Got Executed!" <<endl;
}

void myfunc1(string fname){

    cout << fname << " Soleymanzadeh" <<endl;
}

void myfunc2(string fname="Davood"){

    cout << fname << " Soleymanzadeh" << endl;
}

void myfunc3(string fname, int age){

    cout << fname << " Soleymanzadeh, " << age << " years old." <<endl;
}

int myfunc4(int x, int y){

    return x + y;
}

int main(){

    // Functions
    myfunc();

    // Function Parameters
    myfunc1("Davood");

    // Default parameters
    myfunc2();
    myfunc2("Mohsen");

    //multiple parameters
    myfunc3("Davood", 29);

    // Return value
   cout<< myfunc4(5, 7) << endl;

    return 0;
}
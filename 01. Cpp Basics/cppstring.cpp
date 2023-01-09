#include <iostream>
#include <string>   // This library is required in working with strings

using namespace std;

int main(){

    string name = "Davood";

    // string concatenation (C++ uses + plus integer addition and string concatenation)
    string firstName = "Davood ";
    string lastName = "Soleymanzadeh";

    string fullName = firstName + lastName;
    string fullName1 = firstName + " " + lastName;
    string fullName2 = firstName.append(lastName);
    
    cout <<fullName <<endl;
    cout <<fullName1 <<endl;
    cout <<fullName2 <<endl;

    // string length (length() or size())
    cout <<"The length of the last name is: "<< lastName.length()<<endl;

    // Access characters in string by indexing []
    cout <<firstName[0]<<endl;

    // Special characters and how to use them
    /*
    \' : ' : single quote
    \" : " : double quote
    \\ : \ : backlash
    */

   // cin can only get a single word. however, getline resolves this problem.
   
   string fullname;
   cout << "Type your full name: "<<endl;
   getline(cin, fullname);
   cout << "Your name is: "<< fullname <<endl;

    return 0;
}
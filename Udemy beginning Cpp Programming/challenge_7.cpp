#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Displaying the elements in vector1" << endl;
    cout << "vector1 first element is: " << vector1.at(0) << endl;
    cout << "vector1 second element is: " << vector1.at(1) << endl;
    cout << "The size of vector1 is: " << vector1.size() << endl;

    cout << "============================" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Displaying the elements in vector2" << endl;
    cout << "vector2 first element is: " << vector2.at(0) << endl;
    cout << "vector2 second element is: " << vector2.at(1) << endl;
    cout << "The size of vector2 is: " << vector2.size() << endl;

    cout << "============================" << endl;
    
    vector <vector <int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Displaying the elements in vector_2d" << endl;
    cout << "vector_2d first element is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d second element is: " << vector_2d.at(0).at(1) << endl;
    cout << "vector_2d third element is: " << vector_2d.at(1).at(0) << endl;
    cout << "vector_2d fourth element is: " << vector_2d.at(1).at(1) << endl;
    
    cout << "============================" << endl;
    
    vector1.at(0) = 1000;

    cout << "Displaying the elements in vector_2d" << endl;
    cout << "vector_2d first element is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d second element is: " << vector_2d.at(0).at(1) << endl;
    cout << "vector_2d third element is: " << vector_2d.at(1).at(0) << endl;
    cout << "vector_2d fourth element is: " << vector_2d.at(1).at(1) << endl;

    cout << "============================" << endl;
    
    cout << "Displaying the elements in vector1" << endl;
    cout << "vector1 first element is: " << vector1.at(0) << endl;
    cout << "vector1 second element is: " << vector1.at(1) << endl;

    return 0;
}
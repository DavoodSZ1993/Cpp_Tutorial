#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    // WHile loop
    int i = 0;
    while (i < 5)
    {
        cout << i <<"\n";
        i++;
    }

    // do-while loop
    int j = 0; 
    do
    {
        cout << j << "\n";
        j++;
    } while (j < 5);

    // for loop
    for (int k = 0; k < 10; k = k +2){
        cout << k << "\n";
    }
    
    // break
    for(int m = 0; m < 10; m++){
        if(m == 4){
            break;
        }
        cout<< m <<"\n";

    }

    // continue
        for(int m = 0; m < 10; m++){
        if(m == 4){
            continue;
        }
        cout<< m <<"\n";

    }
    return 0;
    }

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    // if statement
    int x = 5;
    int y = 10;

    if (x < y){
        cout <<"x is less than y" <<endl;
    }

    // else-if
    if (x > y){
        cout << "x is greater than y." <<endl;
    }else{
        cout << "x is less than y." <<endl;
    }

    // if - else if - else
    int time = 22;

    if (time < 12){
        cout << "good morning" <<endl;
    }else if (time > 12 && time < 18){
        cout <<"good afternoon" <<endl;
    }else{
        cout<<"good night."<<endl;
    }

    // short-hand if - else
    string result = (time < 18) ? "good day.": "good evening.";
    cout << result <<endl;

    // switch statement
    int day = 4;

    switch (day){
        case 1:
            cout <<"Monday";
            break;
        case 2:
            cout <<"Tuesday";
            break;
        case 3:
            cout <<"Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout <<"Saturday";
            break;
        case 7:
            cout <<"sunday";
            break;}
    return 0;
}
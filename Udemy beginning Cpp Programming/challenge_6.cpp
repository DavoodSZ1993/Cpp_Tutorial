#include <iostream>

using namespace std;



int main(){

    cout << "Estimate for Carpet Cleaning Service" << endl;

    const double cost_per_small_room {25.0};
    const double cost_per_large_room {35.0};
    const double sales_tax {0.06};
    const int validation_date {30};

    
    cout << "Number of small rooms: ";
    int num_small_rooms {0};
    cin >> num_small_rooms;
    

    cout << "Number of large rooms: ";
    int num_large_rooms {0};
    cin >> num_large_rooms;
    

    cout << "Price per small rooms: $" << cost_per_small_room << endl;
    cout << "Price per large rooms: $" << cost_per_large_room << endl;

    cout << "Cost: $" << (num_large_rooms * cost_per_large_room) + (num_small_rooms * cost_per_small_room) << endl;
    cout << "Tax: $" << (num_large_rooms * cost_per_large_room + num_small_rooms * cost_per_small_room) * sales_tax <<endl;

    cout << "==============================================" <<endl;

    cout << "Total estimate: $" << (num_large_rooms * cost_per_large_room + num_small_rooms * cost_per_small_room) + (num_large_rooms * cost_per_large_room + num_small_rooms * cost_per_small_room) * sales_tax << endl;
    cout << "This estimate is valid for " << validation_date << " days." << endl;


    return 0;
}
#include <iostream>

using namespace std;


int main(){

    const int dollar_to_cent {100};
    const int quarter_to_cent {25};
    const int dime_to_cent {10};
    const int nickel_to_cent {5};
    const int penny_to_cent {1};

    int received_cents {0};
    cout << "Enter an amount in cents: ";
    cin >> received_cents;

    int dollars {0};
    int remaining_cents {0};
    dollars = received_cents / dollar_to_cent;
    remaining_cents = received_cents % dollar_to_cent;


    int quarters {0};
    quarters = remaining_cents / quarter_to_cent;
    remaining_cents = remaining_cents % quarter_to_cent;

    int dimes {0};
    dimes = remaining_cents / dime_to_cent;
    remaining_cents = remaining_cents % dime_to_cent;

    int nickels {0}; 
    nickels = remaining_cents / nickel_to_cent;
    remaining_cents = remaining_cents % nickel_to_cent;

    int penny {0};
    penny = remaining_cents;


    cout <<endl;
    cout << "You can provide this change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << penny << endl;


    return 0;

}
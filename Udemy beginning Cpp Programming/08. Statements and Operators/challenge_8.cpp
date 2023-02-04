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

    int dollars;
    dollars = received_cents / dollar_to_cent;

    int quarters;
    quarters = (received_cents - (dollars * dollar_to_cent)) / quarter_to_cent;

    int dimes;
    dimes = (received_cents - (dollars * dollar_to_cent + quarters * quarter_to_cent)) / dime_to_cent;

    int nickels; 
    nickels = (received_cents - (dollars * dollar_to_cent + quarters * quarter_to_cent + dimes * dime_to_cent)) / nickel_to_cent;

    int penny;
    penny = received_cents - (dollars * dollar_to_cent + quarters * quarter_to_cent + dimes * dime_to_cent + nickels * nickel_to_cent);


    cout <<endl;
    cout << "You can provide this change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << penny << endl;


    return 0;

}

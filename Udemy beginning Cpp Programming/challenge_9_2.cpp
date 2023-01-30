#include <iostream>
#include <vector>
using namespace std;

// This is exactly challenge no. 9 that wwould not allow duplicate entries.

int main () {

    char input_char {};
    vector<int> list{};

    do{
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> input_char; 

        if(input_char == 'P' || input_char == 'p'){
            if(list.size() == 0){
                cout << "[] - the list is empty." <<endl;
            }
            else{
                cout << "[ ";
                for(auto item:list){
                    cout <<item << ' ';
                }
                cout <<"]";
            }

        }else if (input_char == 'A' || input_char == 'a'){
            int input_num {0};
            cout << "Enter an integer to add to the list: ";
            cin >> input_num;

            bool already_exists {false};
            for (auto item: list){
                if(item == input_num){
                    already_exists = true;
                }
            }
            if (already_exists == true){
                cout << "This number already exists in the list." << endl;
            } else{
                list.push_back(input_num);
                cout << input_num <<" added." << endl;
            }

        } else if (input_char == 'M' || input_char == 'm'){
            if (list.size() == 0){

                cout << "Unable to calculate the mean - no data." << endl;
            
            } else{
                int num_of_items {0};
                int total_sum {0};
                double average {0};

                for (auto item: list){
                    
                    total_sum = total_sum + item;
                    num_of_items++;
                }

                average = static_cast<double>(total_sum) / num_of_items;
                cout << "The mean is: " << average << endl;
            }

        } else if(input_char == 'S' || input_char == 's'){
            if (list.size() == 0){
                cout << "Unable to determine the smallest number - list is empty." << endl;
            } else{
                int smallest_item {list.at(0)};
                for(auto item: list){
                    if (item < smallest_item){
                        smallest_item = item;
                    }

                }
                cout << "The smallest number is: " << smallest_item << endl;
            }
        } else if(input_char == 'L' || input_char == 'l'){
            if(list.size() == 0){
                cout << "Unable to determine the largest number - list is empty." << endl;
            } else{
                int largest_item {list.at(0)};
                for(auto item: list){
                    if(item > largest_item){
                        largest_item = item;
                    }
                }
                cout << "The largest number is: " << largest_item << endl;
            }
        } else if(input_char == 'Q' || input_char == 'q'){
            cout << "Goodbye!!" << endl;
        } else{
            cout << "Unknown selection, please try again." << endl;
        }
        
        
        cout << endl;
    } while(input_char != 'q' && input_char != 'Q');

    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// function prototypes
void display();
char user_char();
void print_numbers(vector<int> list);
vector<int> add_number(vector<int> list);
void display_mean(vector<int> list);
void smallest_number(vector<int> list);
void largest_number(vector<int> list);
void quit();


int main(){

    char input_char {};
    vector<int> list {};

    do {
        display();

        input_char = user_char();

        if (input_char == 'P'){
            print_numbers(list);
            
        } else if (input_char == 'A'){
            list = add_number(list);

        } else if (input_char == 'M'){
            display_mean(list);

        }else if (input_char == 'S'){
            smallest_number(list);

        }else if (input_char == 'L'){
            largest_number(list);

        }else if (input_char == 'Q'){
            quit();
        }else{
            cout << "Unknown selection, please try again." << endl;
        }


        cout << endl;
    } while (input_char != 'Q');



    return 0;
}

void display(){
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
}

char user_char(){
    char input_char {};
    cout << "Enter your choice: ";
    cin >> input_char;
    return toupper(input_char);
}

void print_numbers(vector<int> list){
    if (list.size() == 0){
        cout << "[] - The list is empty."<< endl;
    }
    else{
        cout << "[ ";
        for(auto item:list){
            cout <<item << ' ';
         }
        cout <<"]";
    }

}

vector<int> add_number(vector<int> list){
    int input_num {0};
    cout << "Enter an integer to add to the list: ";
    cin >> input_num;
    list.push_back(input_num);
    cout << input_num <<" added." << endl;
    return list;
}

void display_mean(vector<int> list){
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
}

void smallest_number(vector<int> list){
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
}

void largest_number(vector<int> list){
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
}

void quit(){
    cout << "Goodbye!!" << endl;
}

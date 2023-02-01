#include <iostream>
#include <string>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ABKLHGROPLKMBCDQSGHPRUTKMGadfkgplbkwhqgksodlwgdkglpt"};

    string inserted_message {};

    cout << "Enter your secret message:";
    getline(cin, inserted_message);

    cout << "\nEncryting message ..." << endl;

     string key_message {};
    for (char letter: inserted_message){
        size_t index {0};
        index = alphabet.find(letter);
        if (index != string:: npos){
            key_message = key_message + key.at(index);
        } else{
            key_message = key_message + letter;
        }
    }

    cout << "\nEncrypted message: " << key_message <<endl;
    cout << "\nDecrypting message ..." << endl;

    cout << "\nDecrypted Message: " << inserted_message << endl;

    return 0;
}
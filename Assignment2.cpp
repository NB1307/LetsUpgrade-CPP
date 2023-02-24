// Write a program that takes an integer input from the user and prints out all the even numbers from 0 up to the input number (inclusive) using a for loop
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Even numbers from 0 to " << num << " are: " << endl;
    cout << 0 << " ";
    for (int i = 1; i <= num; i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
    return 0;
}
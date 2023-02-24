#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter first integer : ";
    cin >> num1;
    cout << "Enter second integer : ";
    cin >> num2;
    if (num1 > num2){
        cout << "The first integer, i.e. " << num1 << " is greater.";
    }
    else if(num1 == num2){
        cout << "Both the integers are equal.";
    }
    else{
        cout << "The second integer, i.e. " << num2 <<  " is greater.";
    }
    return 0;
}
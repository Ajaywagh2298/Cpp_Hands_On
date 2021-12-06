/* 27.C++ Program to Check Armstrong Number */
#include<iostream>
using namespace std;

int main(){
    int num, no, remain, result = 0;
    cout << "Enter a three-digit number: ";
    cin >> num;
    no = num;

    while (no != 0) {
        // remainder contains the last digit
        remain = no % 10;

        result += remain * remain * remain;

        no /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}

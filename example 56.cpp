/* 56.C++ Program to Concatenate Two Strings */
#include <iostream>
using namespace std;
int main()
{
    string string1, string2, result;
    cout << "Enter string 1: ";
    cin>> string1;

    cout << "Enter string 2: ";
    cin>>string2;

    result = string1 + string2;
    cout << "Resultant String = "<< result;
    return 0;
}

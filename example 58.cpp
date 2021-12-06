/* 58.C++ Program to Sort Elements in Lexicographical Order (Dictionary Order) */

#include <iostream>
using namespace std;
int main()
{
string str[10], temp;
    cout << "Enter 5 words for sort: " << endl;
    for(int i = 0; i < 5; ++i){
            cout << "\t";
            cin >> str[i];
            cout << endl;

    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                }
            }
    }
    cout << "A lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i){
             cout <<"\t";
             cout << str[i] << endl;
             cout << endl;

        }
    return 0;
}

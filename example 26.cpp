/* 26.C++ Program to Display Prime Numbers Between Two Intervals */
#include<iostream>

using namespace std;

int main(){
    int l, h, i;
    bool isPri = true;

    cout << "Enter two numbers : ";
    cin >> l >> h;

    cout << "\nPrime numbers between " << l << " and " << h << " are: " << endl;

    while (l < h) {
        isPri = true;
        if (l == 0 || l == 1) {
            isPri = false;
        }
        else {
            for (i = 2; i <= l / 2; ++i) {
                if (l % i == 0) {
                    isPri = false;
                    break;
                }
            }
        }

        if (isPri)
            cout << l << " ";

        ++l;
    }

    return 0;
}


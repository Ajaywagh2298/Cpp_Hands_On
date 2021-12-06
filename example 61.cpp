/* 61.C++ Program to Add Complex Numbers by Passing Structure to a Function */
#include <iostream>
using namespace std;
typedef struct complex {
    float real;
    float imag;
} c;

c addCom(complex,complex);
int main() {
    c num1, num2, comSum;
    char sig;
    cout << "For 1st complex number : ";
    cin >> num1.real >> num1.imag;
    cout << "For 2nd complex number : ";
    cin >> num2.real >> num2.imag;

    cout << endl ;

    comSum = addCom(num1, num2);
    if(comSum.imag > 0){
        sig = '+';
    }else{
        sig = '-';
    }
    comSum.imag = (comSum.imag > 0) ?
    comSum.imag : -comSum.imag;
    cout << "Sum = " << comSum.real << sig << comSum.imag << "i";
    return 0;
}

c addCom(complex num1, complex num2) {

        complex temp;
        temp.real = num1.real + num2.real;
        temp.imag = num1.imag + num2.imag;
    return (temp);
}

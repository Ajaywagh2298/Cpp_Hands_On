/* 51.C++ Program to Swap Numbers in Cyclic Order Using Call by Reference */
#include<iostream>
using namespace std;
void cSwap(int *a, int *b, int *c);
int main(){
        int a, b, c;
        cout << "Enter value of a, b and c : "<<endl;
        cin >> a;
        cin >> b;
        cin >> c;

        cout << "Value before swap Number : \n" << endl;
        cout << "a , b and c respectively are: " << a << " , " <<b << " , " << c << endl;

        cSwap(&a, &b, &c);

        cout << endl << "Value after swapping numbers : \n"<< endl;
        cout << "a , b and c respectively are: " << a << " , " << b << " , " << c << endl;
        return 0;
}
void cSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

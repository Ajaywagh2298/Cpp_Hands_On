/* 38.C++ Program to Convert Binary Number to Decimal and vice-versa */
#include<iostream>
#include<cmath>
using namespace std;

int convertDB(int);
int convertBD(long long);

int main()
{
    int n;

    cout << "Enter a decimal number: ";
    cin >> n;

    cout << n << " in decimal = " << convertDB(n) << " in binary" << endl ;
    int d = convertDB(n);
    cout<<d<<" in binary = "<<convertBD(d)<<" in decimal"<<endl;
    return 0;
}

int convertDB(int n)
{
   int bin = 0;
    int remain, i = 1, step = 1;

    while (n!=0)
    {
        remain = n%2;
        n /= 2;
        bin += remain*i;
        i *= 10;
    }
    return bin;
}
int convertBD(long long n)
{
    int dec = 0, i = 0, remain;
    while (n!=0)
    {
        remain= n%10;
        n /= 10;
        dec += remain*pow(2,i);
        ++i;
    }
    return dec;
}

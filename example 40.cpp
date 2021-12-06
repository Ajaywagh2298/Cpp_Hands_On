/* 40.C++ Program to Convert Binary Number to Octal and vice-versa */
#include<iostream>
#include<cmath>
using namespace std;
int convertBO(long long bin)
{
    int oct = 0, dec = 0, i = 0;

    while(bin != 0)
    {
        dec += ( bin % 10 ) * pow( 2 , i );
        ++i;
        bin /= 10;
    }

    i = 1;

    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    return oct;
}
int convertOB(int oct)
{
    int dec = 0, i = 0;
    long long bin = 0;

    while( oct != 0 )
    {
        dec += ( oct % 10 ) * pow( 8 , i );
        ++i;
        oct /= 10;
    }

    i = 1;

    while (dec != 0)
    {
        bin+= ( dec % 2) * i;
        dec /= 2;
        i *= 10;
    }

    return bin;
}
int main(){
    int number, a;

    cout<<"Enter the binary number : ";
    cin>>number;

    cout<<"Binary number [ "<<number<<" ] convert into octal [" <<convertBO(number)<<" ] "<<endl;
    a = convertBO(number);
    cout<<"Octal number [ "<<convertBO(number)<<" ] convert into Binary [ " <<convertOB(a)<<" ] "<<endl;
}

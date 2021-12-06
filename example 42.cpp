/* 42.C++ Program to Calculate Power Using Recursion */

#include<iostream>
#include<cmath>
using namespace std;

double setPower(double base, int expo);

int main()
{
    double base, power;
    int expo;


    cout<<"Enter base Number : ";
    cin>>base;
    cout<<"Enter exponent Number : ";
    cin>>expo;

    power = setPower(base, expo);

    cout<<base<< "^"<<expo<<" = "<<power;

    return 0;
}


double setPower(double base, int expo)
{

    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * pow(base, expo - 1);
    else
        return 1 / pow(base, - expo);
}

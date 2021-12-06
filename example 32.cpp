/* 32.C++ Program to Display Prime Numbers Between Two Intervals Using Functions */
#include<iostream>
using namespace std;

int isPrime(int n);

int main()
{
    int n1, n2, i, flag;

    cout<<" Enter the start Number : ";
    cin>>n1;
    cout<<"Enter the end Number : ";
    cin>>n2;

    cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are: "<<endl;

    for(i=n1+1; i<n2; ++i)
    {

        flag = isPrime(i);

        if(flag == 1)
            cout<<i<<"   "<<endl;
    }
    return 0;
}


int isPrime(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}

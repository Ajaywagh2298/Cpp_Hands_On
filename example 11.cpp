/* 11.C++ Program to Calculate Sum of Natural Numbers */

#include<iostream>
using namespace std;

int main(){
    int n ,i ,sum;
    cout <<"Enter a Integer: ";
    cin >> n;

    for (i = 1 ; i <= n ; ++i)
    {
        sum = sum + i;
    }

    cout <<"Sum Natural Integer =  "<< sum;
    return 0;
}

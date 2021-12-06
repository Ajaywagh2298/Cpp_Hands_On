/* 39.C++ Program to Convert Octal Number to Decimal and vice-versa */
#include<iostream>
#include<cmath>
using namespace std;

int covertDO(int dec){
    int oct = 0,value = 1;
    int d = dec;

    while(dec != 0){
        oct += (dec % 8) * value;
        dec /= 8;
        value *= 10;
    }
    return oct;
}
int covertOD(int oct){
    int dec = 0, po = 0;
    int o = oct;

    while(oct != 0){
        dec += (oct % 10) * pow(8,po);
        ++po;
        oct /= 10;
    }
    return dec;
}

int main(){
    int n, a;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Octal from of decimal number "<< n <<" is "<<covertDO(n)<<endl;

    a = covertDO(n);
    cout<<"Decimal number form of octal number "<< covertDO(n) <<" is "<<covertOD(a)<<endl;



}

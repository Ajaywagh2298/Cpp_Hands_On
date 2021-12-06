/* 19.C++ Program to Calculate Power of a Number */
#include<iostream>
using namespace std;
int main(){
    int num,pow,ans=1;
	cout<<"Enter the number: ";
	cin>>num;

	cout<<"Enter the power: ";
	cin>>pow;

	for(int i=0;i<pow;i++){
		ans*=num;
	}
	cout<<num<<" ^ "<<pow<<" = "<<ans;
	return 0;
}

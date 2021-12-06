/* 45.C++ Program to Calculate Standard Deviation */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float price[50], sd, mean, variance, sum = 0, vsum = 0;
	int  i, num;

	cout << "Enter the number  :  ";
	cin >> num;

	cout << "Enter the Real Numbers upto : " << num <<endl;
	for(i = 0; i < num; i++)
	{
	    cout<<"\t";
		cin >>price[i];
	}
	for(i = 0; i < num; i++)
	{
		sum = sum + price[i];
	}
	mean = sum / (float)num;

	for(i = 0; i< num; i++)
	{
		vsum = vsum + pow((price[i] - mean),2);
	}
	variance = vsum / (float)num;
	sd= sqrt(variance);
	cout<<"\n\n******************************************\n"<<endl;

	cout << "Mean                = " << mean <<endl;
	cout << "Variance            = " << variance <<endl;
	cout << "Standard deviation  = " << sd <<endl;;

 	return 0;
}

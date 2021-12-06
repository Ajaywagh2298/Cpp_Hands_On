/* 16.C++ Program to Find GCD */
#include<iostream>
using namespace std;

int main(){
    	int no[20];
    int a,flag;
    cout<<"Program to Find GCD";
    cout << "Enter how many numbers you want to enter 'less than 5' : ";
    cin >>a;
    cout<<"Enter numbers:";
    for(int i=0;i<a;i++)
    	cin>>no[i];

    for(int i=1;i<a;i++)
    	if(no[0]>no[i])
    	{
    		no[0]+=no[i];
    		no[i]=no[0]-no[i];
    		no[0]=no[0]-no[i];
		}

    for (int i = no[0]; i >= 1 ; i--)
	{
		flag=0;
		for(int j=0;j<a;j++)
		{
			if(no[j]%i!=0 )
			{
				flag=1;
				break;
			}
		}
    	if (flag==0)
		{
    	    cout << "GCD = " << i;
    	    break;
        }
    }


    return 0;
}

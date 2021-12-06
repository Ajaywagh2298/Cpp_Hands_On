/* 17.C++ Program to Find LCM */
#include<iostream>
using namespace std;

int main(){

	int no[10];
    int c,flag,max;
    cout << "Enter number ,less than 6: ";
    cin >>c;
    cout<<"Enter numbers:";
    for(int i=0;i<c;i++)
    	cin>>no[i];

    for(int i=1;i<c;i++)
    	if(no[0]<no[i])
    	{
    		no[0]+=no[i];
    		no[i]=no[0]-no[i];
    		no[0]=no[0]-no[i];
		}
           max=no[0];
    while(1)
	{
		flag=0;
		for(int j=0;j<c;j++)
		{
			if(max%no[j]!=0 )
			{
				flag=1;
				break;
			}
		}
    	if (flag==0)
		{
    	    cout << "LCM = " <<max;
    	    break;
        }
        else
        	max++;

    }
    return 0;
}

/* 44.C++ Program to Find Largest Element of an Array */

#include<iostream>
using namespace std;
int main()
{
        int high, arr[100], size, i;
        cout<<"\n Enter how many Integer add in array : ";
        cin>>size;
        cout<<"\n\n**********************\n"<<endl;
        cout<<"\n Enter Array Elements ...... "<<endl;
        for(i=0; i<size; i++)
        {
            cout<<"\t";
            cin>>arr[i];
        }
        high=arr[0];

        for(i=0; i<size; i++)
        {
                if(high<arr[i])
                {
                        high=arr[i];
                }

        }
        cout<<"\n\n**********************\n"<<endl;
        cout<<"Largest Number in Array :  "<<high;
        return 0;
}

/* 46.C++ Program to Add Two Matrix Using Multi-dimensional Arrays */
#include<iostream>

using namespace std;
int main()
{
	int sum[3][3],i,j;
	int mat1[3][3],mat2[3][3];
	cout<<"Enter the first matrix data"<<endl;

	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat1[i][j];
            cout<<"\n";
        }
	}

	cout<<"Enter the second matrix data"<<endl;

	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat2[i][j];
             cout<<"\n";
        }
	}
	cout<<"1st Matrix: \n"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"[\t";
		for(j=0;j<3;j++)
		{
			cout<<mat1[i][j]<<"\t";
		}
		cout<<"]"<<endl;
	}
	cout<<"2nd Matrix: \n"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"[\t";
		for(j=0;j<3;j++)
		{
			cout<<mat2[i][j]<<"\t";
		}
		cout<<"]"<<endl;
	}
	cout<<"Sum of Two Matrix: \n"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"[\t";
		for(j=0;j<3;j++)
		{
			cout<<sum[i][j]<<"\t";
		}
		cout<<"]"<<endl;
	}

}

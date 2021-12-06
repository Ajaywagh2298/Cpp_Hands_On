/* 47.C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays */
#include<iostream>

using namespace std;
int main()
{
	int mult[3][3],i,j;
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
	for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j)
        {
            mult[i][j]=0;
        }
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
		    mult[i][j]=0;
		    for(int k=0;k<3;++k)
            {
			    mult[i][j] = mult[i][j]+ ( mat1[i][k] * mat2[k][j] );
		    }
		}

	}

	cout<<"\n \n";

	for(i=0;i<3;i++)
	{
		cout<<"[\t";
		for(j=0;j<3;j++)
		{
           cout <<mult[i][j]<<"\t";
		}
		cout<<"]"<<endl;
	}
}

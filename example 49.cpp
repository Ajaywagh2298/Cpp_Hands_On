/* 49.C++ Program to Multiply two Matrices by Passing Matrix to Function */
#include<iostream>

using namespace std;

void mult(int A1[5][5],int r1,int c1,int A2[5][5],int r2,int c2)
{
    int M[5][5],i,j,k;
    int sum=0;
    for(i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            {
                sum=0;
                    for(k=0;k<c1;k++)
                        sum+=A1[i][k]*A2[k][j];
                        M[i][j]=sum;
            }
            cout<<"Final multiplication mattrix";
            for(i=0;i<r1;i++)
            {
                cout<<endl<<" ";
                    for( j=0;j<c2;j++)
                        cout<<M[i][j]<<" ";
            }
}
int main()
{
        cout<<"C++ Program to Multiply two Matrices by Passing Matrix to Function\n";
        int A1[5][5],A2[5][5],M[5][5],r1,c1,r2,c2,i,j,k;
        start:
        cout<<"\nEnter rows and collum of 1st array[5][5]";
        cin>>r1>>c1;
        cout<<"Enter rows and collum of 2nd array[5][5]";
        cin>>r2>>c2;
        if(c1!=r2)
        {
            cout<<"Multiplication of this 2 mattrix not possible (C1!=R2)";
            goto start;
        }
            cout<<"Enter 1st mattrix";
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    cin>>A1[i][j];
                }
            }
            cout<<"Enter 2nd mattrix";
                for(i=0;i<r2;i++){
                for(j=0;j<c2;j++){
                    cin>>A2[i][j];
                  }
                }
                    mult(A1,r1,c1,A2,r2,c2);


return 0;
}

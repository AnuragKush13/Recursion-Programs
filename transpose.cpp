#include<iostream>
using namespace std;

int main()
{
    int a[3][2]={{1,2},
        {4,5},
        {7,8}};
    int t[2][3] ;

     

       

    for(int i = 0 ; i< 3;i++)
    {
        for(int j = 0 ; j< 2; j++)
        {
            t[j][i] = a[i][j];
           
        }
       
    }

 for(int i = 0 ; i< 2;i++)
    {
        for(int j = 0 ; j< 3; j++)
        {
           cout<<t[i][j]<<" ";
           
        }
        cout<<endl;
       
    }

    return 0;
}
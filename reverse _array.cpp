#include<iostream>
using namespace std;

void reverseArray(int a[],int s, int e){
    if(s>e)
    return;
    int temp =a[s];
    a[s] = a[e];
    a[e] = temp;
    reverseArray(a,s+1,e-1);

}

int main()
{
    int a[5] = {1,2,3,4,5};
    
    
    reverseArray(a,0,4);
    for(int i  =0 ;i<5;i++ )
    cout<<a[i]<<" ";
    return 0;
}
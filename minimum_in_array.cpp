#include<iostream>
using namespace std;

int minimum(int a[],int s){
    if(s == 1)
    return a[0];
    return min(a[s-1] , minimum(a, s-1));
    // return a[s-1];
    // return minimum(a,s--);
}


int main()
{
    int a[5] = {12,2,3,4,5};
    
    cout<<" Minimun from array: "<<minimum(a,5);
    return 0;
}
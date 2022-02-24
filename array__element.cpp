#include<iostream>
using namespace std;

void array_element(int a[], int l){
if(l == 0)
{
    
    return;
}
array_element(a, l-1);
cout<<a[l-1]<<endl;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    array_element(a,sizeof(a)/sizeof(a[0]));
    return 0;
}
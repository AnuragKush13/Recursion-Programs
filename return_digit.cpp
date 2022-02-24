#include<iostream>
using namespace std;

void digits(int n){
    if(n == 0)
    return;
    digits(n/10);
    cout<<n%10<<" ";
}

int main()
{
    digits(34562);
    return 0;
}
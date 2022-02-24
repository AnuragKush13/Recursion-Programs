#include<iostream>
using namespace std;

void fibonacci(int x,int y,int l)
{   if(l == 0)
    return;
    if(x == 0)
    cout<<x<<" ";
    if(y == 1)
    cout<<y<<" ";
    else
    cout<< x+y<<" ";
   fibonacci(y, x+y ,l-1);
}

int main()
{
    fibonacci(0,1,7);
    return 0;
}
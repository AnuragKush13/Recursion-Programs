#include<iostream>
using namespace std;

void fun1(int x)
{   
    if(x == 0)
    return;
   fun1(x-1);
   cout<<x<<" ";
}

int main()
{
    fun1(50);
    return 0;
}
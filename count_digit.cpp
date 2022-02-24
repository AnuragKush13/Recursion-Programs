#include<iostream>
using namespace std;

int count_digit(int n){
    int i = 1;
    if(n== 0)
    {
        return 0;
    }
    return i + count_digit(n/10);

}

int main()
{
   int a = count_digit(4566);
   cout<<a;
    return 0;
}
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
{   int n = 45775;
   int a = count_digit(n);
   cout<<a;
    return 0;
}
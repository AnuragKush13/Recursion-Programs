#include<iostream>
using namespace std;

// string check_palindrome(char a[],int l,string b[],int i = 0)
// {
//    if(l == 1)
// {b[0]= a[0];
// return b;
// }
// b[i] = a[l-1];
// return check_palindrome(a,l-1,b,i+1);

// }

bool palindrome(char a[], int s, int e)
{
    if(s >= e)
    {
        return true;
    }
    if(a[s] == a[e])
    {
        return palindrome(a,s+1,e-1);
    }
    return false;
}


int main()
{   
//    cout<<"Enter to check palindrome: \n";
//     char b[];
//     cin>>b;
    bool a = palindrome("mom",0,sizeof(b)/sizeof(b[0])-1);
    if(a)
    {
        cout<<"It's a palindrome!!";
    }
    else
        cout<<"Not a palindrome";
    // check_palindrome("mom",3, b);
    return 0;
}
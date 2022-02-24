#include<iostream>
using namespace std;

int find_gcd(int x,int y){
    


//    while(x!= y)
//    {
//        if(x>y){
//            return find_gcd(x-y,y);
//        }
//        else 
//        return find_gcd(x, y-x);
//    }
  
//   return x;

if(x == 0)
return y;

return find_gcd(  y % x, x);


}

int main()
{
// x should be less than y
   cout<< find_gcd(14,21);
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    int poww2=pow(2,floor(log2(num)));
    int poww5=pow(5,floor(log(num)/log(5)));
    int num2=0,num5=0;
    for(int i=2;i<=num;i+=2)
    {
        num2=num2+log2(gcd(i,poww2));\
    }
      for(int i=5;i<=num;i+=5)
    {
        num5=num5+(log(gcd(i,poww5))/log(5));
    }
    cout<<min(num2,num5);
}
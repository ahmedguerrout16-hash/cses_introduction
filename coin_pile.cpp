#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test;cin>>test;
    while(test--)
    {
        ll num1,num2;cin>>num1>>num2;
        if(2*min(num1,num2)>=max(num1,num2))
        {
           if((num1+num2)%3==0) cout<<"YES\n";
           else cout<<"NO\n";
        }
        else cout<<"NO"<<'\n';
    }
}
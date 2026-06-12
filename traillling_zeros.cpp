#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    
    int num;cin>>num;
    int num5=0;
    ll j=5;
    while((num/j)!=0)
     {
       num5+=(num/j);j=j*5;
     }
    cout<<num5;

}

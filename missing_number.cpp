#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll len;cin>>len;ll sum=((len+1)*len)/2;
    for(ll i=1;i<len;i++)
    {
        ll num;cin>>num;sum-=num;
    }
    cout<<sum;

}
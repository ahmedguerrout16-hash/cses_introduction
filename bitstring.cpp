#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num;cin>>num;
    ll total=1;
    while(num--)
    {
       total=total*((ll)(2))%(1000000007);
    }
    cout<<total;
}
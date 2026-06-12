#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test;cin>>test;
    while(test--)
    {
        ll y,x,ans;cin>>y>>x;
        if(y>x)
        {
            if(y%2==1) ans=(y-1)*(y-1)+x;
            else ans=y*y-x+1;
        }
        else
        {
            if(x%2==0) ans=(x-1)*(x-1)+y;
            else ans=x*x-y+1;
        }
        cout<<ans<<'\n';
    }
}
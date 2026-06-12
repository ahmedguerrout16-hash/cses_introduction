#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num;cin>>num;
    ll sum=((num+1)*num)/2;
    vector<int> v1;
    vector<int> v2;
    if(sum%2==1) cout<<"NO";
    else
    {
        cout<<"YES"<<'\n';
        int i=num;
        sum/=2;
        while(i!=0)
        {
          if(sum>=i)
          {
            sum-=i;
            v1.push_back(i);
          }
          else v2.push_back(i);
          i--;
        }
        cout<<v1.size()<<'\n';
        for(int i=0;i<v1.size();i++) {cout<<v1[i]<<' ';}
        cout<<'\n';
        cout<<v2.size()<<'\n';
        for(int i=0;i<v2.size();i++) {cout<<v2[i]<<' ';};
    }
}
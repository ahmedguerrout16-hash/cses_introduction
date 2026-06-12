#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll minn=10e9;
void apple(vector<int> &v,int len,ll total,ll gather=0,int i=-1)
{
   if(i==(len-1)) {return;}
   i++;
   ll diff=abs(total-(2*gather));
   minn=min(minn,diff);
   apple(v,len,total,gather+v[i],i);
   apple(v,len,total,gather+0,i);

}
int main()
{
    int len;cin>>len;
    vector<int> v;
    ll total=0;
    for(int i=0;i<len;i++)
    {
        int a;cin>>a;
        v.push_back(a);
        total+=a;
    }
    apple(v,len,total);
    cout<<minn;
}
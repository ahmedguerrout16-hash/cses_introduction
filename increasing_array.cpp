#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long len;cin>>len;
    long long maxx,total=0;cin>>maxx;
    for(long long i=1;i<len;i++)
    {
     long long num;cin>>num;
     maxx=max(maxx,num);
     if(num<maxx) total=total+maxx-num;
    }
    cout<<total;
}
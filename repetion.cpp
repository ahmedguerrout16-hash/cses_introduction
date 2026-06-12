#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;cin>>str;int maxx=0,sum=0;
    str=str+"D";
    for(int i=0;i<str.length()-1;i++)
    {
       if(str[i]==str[i+1]) sum++;
       else 
       {
        sum++;
        maxx=max(sum,maxx);
        sum=0;
       }
    }
    cout<<maxx;
}
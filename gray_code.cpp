#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    vector<int> v(1);
    int j=0;
    for(int i=0;i<num;i++) {cout<<0;}
    cout<<'\n';
    while(j!=num)
    {
    int len=v.size()-1;
    for(int i=len;i>=0;i--)
    {
        int numm=v[i]+pow(2,j);
        for(int m=0;m<num;m++) {if(numm&(1<<m)) cout<<1;else cout<<0;}
        v.push_back(numm);
        cout<<'\n';
    }
    j++;
    }
}
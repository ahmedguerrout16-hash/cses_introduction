#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    if(num==1) cout<<1;
    else if(num==4) cout<<"3 1 4 2";
    else if(num<=3) cout<<"NO SOLUTION";
    else 
    {
        int nmm=num,check=0;
        while(check<num)
        {
            cout<<nmm<<' ';
            check++; nmm-=2;
            if((nmm==-1)||(nmm==0)) {nmm=num-1;}
        }
    }
}
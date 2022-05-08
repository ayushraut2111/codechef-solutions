#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       float s=(x*107)/100;
       if(s>=y)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}
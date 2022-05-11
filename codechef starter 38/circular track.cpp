#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,m;
       cin>>a>>b>>m;
       if(abs(a-b)<=m/2)
       cout<<abs(a-b)<<endl;
       else
       cout<<m-abs(a-b)<<endl;
    }
}
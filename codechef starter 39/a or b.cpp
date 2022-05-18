#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       int p1=500-(x*2);
       int p11=1000-(x+y)*4;
       int p2=1000-(y*4);
       int p22=500-(x+y)*2;
       cout<<max(p1+p11,p2+p22)<<endl;
    }
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int w,x,y,z;
       cin>>w>>x>>y>>z;
       int a=x-w;
       if(y*z>a)
       {
           cout<<"overflow"<<endl;
       }
       else if(y*z<a)
       {
           cout<<"unfilled"<<endl;
       }
       else
       cout<<"filled"<<endl;
    }
}
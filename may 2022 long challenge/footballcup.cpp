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
       if(x==0&&y==0)
       {
           cout<<"YES"<<endl;
       }
       else if(x!=0&&y!=0)
       {
           cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
    }
}
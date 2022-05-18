#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<string>v(n);
       for(auto &x:v)cin>>x;
       int c1=0,c2=0;
       for(auto x:v)
       {
           if(x=="START38")
           c1++;
           else
           c2++;
       }
       cout<<c1<<" "<<c2<<endl;
    }
}
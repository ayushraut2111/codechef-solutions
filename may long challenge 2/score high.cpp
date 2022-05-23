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
       vector<int>v(4);
       for(auto&x:v)cin>>x;
       cout<<*max_element(v.begin(),v.end())<<endl;

    }
}
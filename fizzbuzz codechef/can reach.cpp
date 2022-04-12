#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int a=0,b=0;
        if(x>0){
        while(a<x)
        {
            a+=k;
        }
        }
        else
        {
            while(a>x)
            {
                a-=k;
            }
        }
        if(y>0){
        while(b<y)
        {
            b+=k;
        }
        }
        else
        {
            while(b>y)
            {
                b-=k;
            }
        }
        cout<<a<<" "<<b<<endl;
        if(a==x&&b==y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
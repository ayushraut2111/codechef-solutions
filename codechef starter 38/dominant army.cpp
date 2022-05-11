#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a[3];
       for(int i=0;i<3;i++)
       {
       cin>>a[i];
       }
       sort(a,a+3);
       if(a[2]>a[0]+a[1])
       {
           cout<<"yes"<<endl;
       }
       else
       cout<<"no"<<endl;
       
    }
}
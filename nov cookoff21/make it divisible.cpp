#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>1)
        {

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]%3;
            if(a[i]==1)
            c1++;
            else if(a[i]==2)
            c2++;
        }
        if(c1==0||c2==0)
        {
            if(c1==0)
            cout<<c2-1<<endl;
            else
            cout<<c1-1<<endl;
        }
        else
            if(c1==c2)
            cout<<c1<<endl;
            else
            cout<<-1<<endl;
        
    
    }
    else
    cout<<-1<<endl;
}
}
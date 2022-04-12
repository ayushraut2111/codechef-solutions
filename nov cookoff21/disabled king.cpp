#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=1,b=1,count=0;
        while(a!=n||b!=1)
        {
            if(a==1&&b==1)
            {
                a+=1;
                b+=1;
            }
            else if(a<n&&b>1)
            {
                a+=1;
                b-=1;
            }
            else if(a==n&&b>1)
            b-=1;
            else if(a>n&&b>1)
            {
                a-=1;
                b-=1;
            }
            else if(a<n&&b==1)
            {
                a+=1;
                b+=1;
            }
            else if(a>n&&b<1)
            {
                a-=1;
                b+=1;
            }
            else if(a==n&&b<1)
            b+=1;
            else if(a<n&&b<1)
            {
                a+=1;
                b+=1;
            }
            else if(a<n&&b<0)
            {
                a+=1;
                b+=1;
            }
            count++;
        }
        cout<<count<<endl;
    }
   
    
}
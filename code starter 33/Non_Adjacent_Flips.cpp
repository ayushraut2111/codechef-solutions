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
           string s;
           cin>>s;
           int c=0,c11=0;
           for(int i=0;i<n;i++)
           {
               if(s[i]=='1')
               {
                   c++;
               }
               if(s[i]=='1'&&s[i-1]==s[i])
               {
                   c11++;
                   break;
               }
           }
           if(c11>0)
           {
               cout<<2<<endl;
           }
           else if(c==0&&c11==0)
           {
               cout<<0<<endl;
           }
           else 
           {
               cout<<1<<endl;
           }
        }
    }   
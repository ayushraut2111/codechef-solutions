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
        string s;
        cin>>s;
        stack<int>q;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(q.empty()||q.top()!=s[i])
            q.push(s[i]);
            else
            {
                q.pop();
                q.push('0');
                count++;
            }
        }
        if(q.size()==1 &&count==n-1)
        cout<<"YES"<<endl;
        else
        {
            char ch=q.top();
            q.pop();
            while(!q.empty() && q.top()==ch)
            {
                q.pop();
            }
            if(q.empty())
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}
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
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                v.push_back(a[i]&a[j]);
            }
        }
        priority_queue<int>max;
        priority_queue<int,vector<int>,greater<int>>min;
        for(int i=0;i<v.size();i++)
        {
            min.push(v[i]);
            max.push(v[i]);
        }
        while(min.top()!=max.top())
        {
            int x=min.top();
            min.pop();
            int y=max.top();
            max.pop();
            int z=x|y;
            min.push(z);
            max.push(z);
        }
        cout<<min.top()<<endl;
    }
}

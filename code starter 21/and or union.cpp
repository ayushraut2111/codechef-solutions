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




// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ff first
// #define ss second
// #define pb push_back
// #define vi vector<int>
// #define rep(i, a, b) for (int i = a; i < b; i++)
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vi a(n);
//         rep(i, 0, n)
//         {
//             cin >> a[i];
//         }
//         vector<int> bit(32);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 32; j++)
//             {
//                 bit[j] += ((a[i] & (1 << j)) > 0);
//             }
//         }
//         int ans = 0;
//         for (int i = 0; i < 32; i++)
//         {
//             if (bit[i] >= 2)
//             {
//                 ans |= (1 << i);
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
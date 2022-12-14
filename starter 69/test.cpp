#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
int x,y;
cin>>x>>y;
vector<int>a(x),b(x);
set<int>st;
for(auto&i:a)
{
cin>>i;
st.insert(i);
}

for(auto&t:b)cin>>t;
if(st.size()<y)
{
cout<<-1<<endl;
return;
}
map<int,int>mn;
for(int i=0;i<x;i++)
{
 if(mn.find(a[i])==mn.end())
{
mn[a[i]] = b[i];
continue;
}
mn[a[i]] = min(mn[a[i]],b[i]);
}
vector<int>val;
for(auto&x:mn)val.push_back(x.second);
sort(val.begin(),val.end());
long long res = accumulate(val.begin(),val.begin()+y,0LL);
cout<<res<<endl;
}

int main() {
int t = 1;
cin>>t;
while(t--)
{
solve();
}
}
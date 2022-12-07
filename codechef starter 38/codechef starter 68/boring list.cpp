#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
 
int main() 
{ 
//freopen("a.txt","r",stdin); 
ll t; 
cin>>t; 
while(t--) 
{ 
ll n; 
cin>>n; 
vector<ll> v(n); 
ll c=0; 
for(ll i=0;i<n;i++) 
{ 
cin>>v[i]; 
if(v[i]==1) 
{ 
c++; 
} 
} 
sort(v.begin(),v.end()); 

for(ll i=0;i<n;i++) 
{ 
if(v[i]!=1 && v[i]%2==0 && c>0) 
{ 
v[i]++; 
c--; 
} 
} 
ll s=1; 
for(ll i=0;i<n;i++) 
{ 
s=(s*v[i])%998244353; 
} 
cout<<s<<endl; 
} 
return 0; 
}
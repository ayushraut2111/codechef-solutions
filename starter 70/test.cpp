#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(){

    ll n;
    cin>>n;
    vector<ll> graph[n+1];
    ll score = n-1;
    ll total = n*(n+1)/2;

    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        
    }
    
    ll q;
    cin>>q;

    ll dp[n+1];
    memset(dp, 0, sizeof(dp));  


    while( q--){

        ll ty, x;
        cin>>ty;
        if(ty == 1)
        {
            
            cin>>x;
            
            if( graph[x].size() == 0){

                score -= 1;
                dp[x] = 1;
                total -= x;
            }else{

                ll AND = 1;

                for( ll ch : graph[x]){
                    AND = AND&ch;
                }
                dp[x] = AND;

                if(dp[x])
                  {  score -= 1;
                        total -= x;
                  }
                
            }

        }else{

            if(!total){
                cout<<(n-1)<<endl;
            }else{
                cout<<score<<endl;
            }
        }
    }




    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
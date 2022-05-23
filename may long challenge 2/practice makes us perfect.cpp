#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

/********************* Ayush Chaurasia Template *********************/
struct dsu {
    vector<int> p, sz;
    dsu(int n) {
        p.resize(n); iota(p.begin(), p.end(), 0);
        sz.assign(n, 1);
    }
    int find(int u) {return u == p[u] ? u : p[u] = find(p[u]);}
    bool same(int u, int v) {return find(u) == find(v);}
    bool merge(int u, int v) {
        u = find(u), v = find(v);
        if (u == v) return false;
        if (sz[u] > sz[v]) swap(u, v);
        sz[v] += sz[u];
        p[u] = v;
        return true;
    }
};
/****************** Prime Generator **********************/ 
const int N=1e7+10; int prime[20000010]; 
bool isprime[N]; int nprime; 
template <typename T> void Sieve(T a) 
{nprime = 0;memset(isprime,true,sizeof(isprime));
isprime[1]=false;for(int i=2;i<N;i++){
if(isprime[i]){prime[nprime++]=i;for(int j=2;i*j<N;j++)
isprime[i*j]=false;}}}

template <typename T> inline T PrimeFactors(T n)
{ll cnt=0,sum=1;for(int i=0; prime[i]*prime[i]<=n 
and i<nprime;i++){cnt=0;while(n%prime[i]==0)
{cnt++;n/=prime[i];}sum*=(cnt+1);}
if(n>1)sum*=2;return sum;} 
/****************** Prime Generator End **********************/ 

template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

ll Mod(ll a, ll n)
{
ll q = (ll)floor((double)a / n);
return a - n * q;
}
const int MAX_N = 1e5 + 5;
const ll M = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int practice(int a[])
{
    int count=0;
    for(int i=0;i<4;i++)
    {
        count=a[i]>=10?count+1:count+0;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    cout<<practice(a)<<endl;
}
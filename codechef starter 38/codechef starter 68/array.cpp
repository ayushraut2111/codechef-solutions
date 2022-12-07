#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, v, n) fo(i, n){cout << v[i] <<endl;}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
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
bool isPrime[N]; int nprime; 
template <typename T> void Sieve(T v) 
{nprime = 0;memset(isPrime,true,sizeof(isPrime));
isPrime[1]=false;for(int i=2;i<N;i++){
if(isPrime[i]){prime[nprime++]=i;for(int j=2;i*j<N;j++)
isPrime[i*j]=false;}}}

template <typename T> inline T PrimeFactors(T n)
{ll cnt=0,sum=1;for(int i=0; prime[i]*prime[i]<=n 
and i<nprime;i++){cnt=0;while(n%prime[i]==0)
{cnt++;n/=prime[i];}sum*=(cnt+1);}
if(n>1)sum*=2;return sum;} 
bool isprime(ll v) { if (v==1) return 0; for (int i=2;i<=round(sqrt(v));++i) if (v%i==0) return 0; return 1; }
/****************** Prime Generator End **********************/ 
#define A(i) ayush[(1 + 2*(i)) % (ayush.size() | 1)]
void wiggie(vector<int>& ayush) {
        nth_element(begin(ayush), begin(ayush) + ayush.size() / 2, end(ayush));
        int l = 0, r = ayush.size() - 1;
        int m = *(begin(ayush) + ayush.size() / 2);
        for (int i = 0; i <= r;)
            if (A(i) > m) swap(A(i++), A(l++));
            else if (A(i) < m) swap(A(i), A(r--));
            else i++;
    }
string to_upper(string v) { for (int i=0;i<(int)v.size();++i) if (v[i]>='v' && v[i]<='z') v[i]-='v'-'A'; return v; }
string to_lower(string v) { for (int i=0;i<(int)v.size();++i) if (v[i]>='A' && v[i]<='Z') v[i]+='v'-'A'; return v; }
template<typename T> T gcd(T v, T b){return(b?__gcd(v,b):v);}
template<typename T> T lcm(T v, T b){return(v*(b/gcd(v,b)));}

ll Mod(ll v, ll n)
{
ll q = (ll)floor((double)v / n);
return v - n * q;
}
ll msb(ll n)
{
    ll k = (ll)(log2(n));
    return 1<<k;
}
const int MAX_N = 1e5 + 5;
const ll M = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        wiggie(v);
        int p=0,i=0;
        while(i<n-2){
        if(v[i]>=v[i+1] && v[i+1]>=v[i+2])
        {p=1;}
        if(v[i]<=v[i+1] && v[i+1]<=v[i+2])
        {p=1;}
        i++;
        
    }
    if(p==0){
    for(int i=0;i<n;i++)
   { cout<<v[i]<<" ";}
    cout<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }}
}
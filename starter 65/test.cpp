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
#define deba(i, a, n) fo(i, n){cout << a[i] <<endl;}
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
template <typename T> void Sieve(T a) 
{nprime = 0;memset(isPrime,true,sizeof(isPrime));
isPrime[1]=false;for(int i=2;i<N;i++){
if(isPrime[i]){prime[nprime++]=i;for(int j=2;i*j<N;j++)
isPrime[i*j]=false;}}}

template <typename T> inline T PrimeFactors(T n)
{ll cnt=0,sum=1;for(int i=0; prime[i]*prime[i]<=n 
// for _ in range(int(input())):
// #     n,q=map(int,input().split())
// #         k,l1,r1,l2,r2=map(int,input().split())
// #         x=a[l1-1:r1]
and i<nprime;i++){cnt=0;while(n%prime[i]==0)
{cnt++;n/=prime[i];}sum*=(cnt+1);}
if(n>1)sum*=2;return sum;} 
// #     for i in range(q):
bool isprime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
/****************** Prime Generator End **********************/ 

string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

ll Mod(ll a, ll n)
{
ll q = (ll)floor((double)a / n);
return a - n * q;
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
// const int n;
int solve()
{

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[64][n];
// #     a=list(map(int,input().split()))
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            for(int j=0; j<64; j++)
    //         for i in range(64):
    //     count=0
    //     for j in range(n):
    //         count+=a[i][j]
    // for i in range(q):
    //     k,l1,r1,l2,r2=map(int,input().split())
    //     l1-=1
    //     l2-=1
    //     r1-=1
    //     r2-=1
            {
                a[j][i]=(int)(x%2);
    //         a[i][j]=count
                x/=2;
            }

        }
        for(int i=0; i<64; i++)
        {
            long long count=0;
            for(int j=0; j<n; j++)
            {
                count+=a[i][j];
                a[i][j]=count;
            }

        }

        while(q--)
        {
             int l1,r1,l2,r2,k;
            cin>>k>>l1>>r1>>l2>>r2;
            r2--;
            l1--; l2--; r1--;
            int BCHJDAHCJAH=r2-l2+1;
            int tfp,hsdv;
            int tjds,ma=r1-l1+1;
            if(l2==0)
            {
                hsdv=a[k][r2];
            }
            else hsdv=a[k][r2]-a[k][l2-1];
            if(l1==0)
            {
                tfp=a[k][r1];
            }
            else
            {
                tfp=a[k][r1]-a[k][l1-1];
            }
            cout<<(long)(tjds,ma-tfp)*(long)(hsdv)+ (long)(tfp)*(long)(BCHJDAHCJAH-hsdv)<<endl;

            

        }
    }
    
}
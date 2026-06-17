// Codeforces Problem: 1832C - Contrast Value
// Submission ID: 379254260
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_Contrast_Value
// Rating: Rating
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 // Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, newa, b) for(int i = newa; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 // Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll newa, ll b) { return ((newa % MOD) + (b % MOD)) % MOD; }
ll modMul(ll newa, ll b) { return ((newa % MOD) * (b % MOD)) % MOD; }
 void solve() {
    int n ; cin >> n ;
    vector<ll>a(n) ;
    vecInput(a) 
    int cnt = 1 ;
    vector<ll>newa ;
    for0(i,n)
    {
        if (newa.empty() || a[i] != newa.back()) 
            newa.pb(a[i]);
            }
    if(newa.size()==1)
    {
        cout << 1 << '\n' ;
        return ;
    }
    ll last = newa[0] ;
    n = newa.size() ;
    vector<ll> b ;
    b.emplace_back(newa[0]) , b.emplace_back(newa[n-1]);
    for(int i = 1 ; i < n - 1; i++)
    {
                if(newa[i]>last)
        {
            if(newa[i]>newa[i+1])
            {
                b.emplace_back(newa[i]) ;
                last = newa[i] ;
            }
        }
        if(newa[i]<last)
        {
            if(newa[i]<newa[i+1])
            {
                b.emplace_back(newa[i]) ;
                last = newa[i] ;
            }
        }
                        }
    cnt = b.size() ;
    cout << cnt << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
 // 3 2 5 4 3 4 3 6 7 8
// 2 5 5 7
// 7 5 5 2
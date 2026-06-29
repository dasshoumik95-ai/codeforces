#include <bits/stdc++.h>
using namespace std;
 
//    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_Chat_Ban
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
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 
// Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '
';
 
// Fast I/O Helpers
#define YES cout << "YES" << '
';
#define NO cout << "NO" << '
';
 
// Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
// Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
 
void solve() {
    ll k , x ; 
    cin >> k >> x ;
    ll ans = 0 ;
 
    if(x == k*(k+1)/2)
        ans = k ;
 
    else if( x >= (k)*(k))
        ans = 2*k - 1 ;
 
    else if(x < k*(k+1)/2 )
    {
        ll l = 0 , r = k ;
        while(l<=r)
        {
            ll i = l + (r-l)/2 ; // i = mid
            
            if(i*(i+1) >= 2*x)
            {
                r = i - 1 ;
                ans = i ;
            }
            else if(i*(i+1) < 2*x)
            {
                l = i + 1 ;
            }
 
        }
    }
    else
    {
        ll l = 1 , r = k - 1 ;
        while(l<=r)
        {
            ll i = l + (r-l)/2 ; 
            
            ll total = k*(k+1)/2 + i*(2*k - 1 - i)/2;
            
            if(total < x)
            {
                l = i + 1; 
            }
            else
            {
                ans = k + i ; 
                r = i - 1 ;   
            }
        }
    
    }
    cout << ans << '
' ;
}
// total 2k - 1 lines
// kth line has k emotes total k(k+1)/2 emotes
// k+1 llne 
// ith line if x<=k(k+1)/2 
// BS i(i+1) <= 2*x
// else 
// 2k-1(2k)/2 - (2k-i-1)(2k-i)/2
// 2kk - k - (2k-i)(2k-i)/2 + (2k-i)/2
// 2ki - ii/2 -i/2
//  k(k+1)/2 + i(2*k - i - 1)/2 ;
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
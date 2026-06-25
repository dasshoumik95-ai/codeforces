// Codeforces Problem: 1879C - Make it Alternating
// Submission ID: 380179645
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: C_Make_it_Alternating
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
const int MOD2 = 998244353 ;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
const int MAX = 200005;
ll fact[MAX];
 void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD2 ;
    }
}
void solve() {
    // int n ; cin >> n ;
    string s ; cin >> s ;
    int n = s.size() ;
    int len = 1 ;
     ll removals = 0 , sol = 1 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] == s[i-1])
            len++ ;
         else 
        {
            if(len > 1)
            {
                removals += len - 1 ;
                sol = (sol * len) % MOD2 ;
            }
            len = 1 ;
        }
     }
     removals += len - 1 ;
    sol = (sol * len) % MOD2 ;
     cout << removals << " " << (sol*fact[removals]) % MOD2 << '\n' ;
}
 int main() {
    fast;
    precompute() ;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
// 1000111110000011
// 2    4    4  1 removals
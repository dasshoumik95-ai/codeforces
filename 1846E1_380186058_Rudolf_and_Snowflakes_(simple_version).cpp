// Codeforces Problem: 1846E1 - Rudolf and Snowflakes (simple version)
// Submission ID: 380186058
// Language: C++23 (GCC 14-64, msys2)

// 1 2 4 = = 7
// 1 3 9 == 13
// 1 4 16 == 21
// 1 5 25 == 31
// 1 6 36 == 43
// 1 7 49 == 57
 // n -- n-1 
// a(a^j - 1)/(a-1)
// n-1 | a && (a-1)*(n-1) + 1 power of a 
 #include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: E_1_Rudolf_and_Snowflakes_simple_version
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
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
// void precommute () {
 // }
void solve() {
    int n ; cin >> n ;
        for(int i = 2 ; i*i < n ; i++) {
        if((n-1)%i ==0)
        {
            int val = (n)*(i-1) + 1 ;
            while(val % i == 0) {
                val /= i;
            }
             if(val==1) {
                YES
                return ;
            }
        }
    }
    NO ;
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
// Codeforces Problem: 2233A - AI Project Development
// Submission ID: 377932856
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: 1
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    ll n , x , y , z ;
    cin >> n >> x >> y >> z ;
     ll ai = 0 , notai = (n + x + y - 1) / (x + y) ;
     if (z * x >= n)
        ai = (n + x - 1) / x;
    else
        ai = z + ceil((ld)(n - z * x) / (x + 10 * y));
     cout << min(ai, notai) << '\n' ;
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
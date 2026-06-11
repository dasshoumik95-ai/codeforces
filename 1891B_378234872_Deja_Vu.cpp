// Codeforces Problem: 1891B - Deja Vu
// Submission ID: 378234872
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Deja_Vu
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
    ll n , q ;
    cin >> n >> q ;
     vector<ll> a(n) , x(q) ;
    vecInput(a)
    vecInput(x)
     ll prev = 31 ; // x<=30
    for(int i = 0 ; i < q ; i++)
    {
        if(x[i]>=prev)
            continue ;
         ll val = pow(2,x[i]) ;
         for(int j = 0 ; j < n ; j++)
        {
            if(a[j] % val == 0)
                a[j] += (val/2) ;
        }
        prev = x[i] ;
    }
     vecOutput(a)
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
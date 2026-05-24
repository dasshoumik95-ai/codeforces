// Codeforces Problem: 1543A - Exciting Bets
// Submission ID: 375962802
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    ll a , b ;
    cin >> a >> b ;
    ll x = abs(a-b) ;
        if(a==b)
        cout << 0 << " " << 0 << '\n' ;
    else
    cout << x << ' ' << min(b%x,(x - b % x) % x)  << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
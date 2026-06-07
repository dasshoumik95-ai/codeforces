// Codeforces Problem: 1418A - Buying Torches
// Submission ID: 377600209
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: A_Buying_Torches
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
    ll x , y , k ;
    cin >> x >> y >> k ;
     ll n = 0 ;
     n = ((k*y + k - 1) + (x-1) - 1)/(x - 1) ; // ceil a/b = a+b-1 /b 
//    n = ceil((ld)(k*y + k - 1) / (x-1))  ;
     cout << n + k << '\n' ;
}
 // x , y , k
// sticks >= k , coal >= k
// t = 0 stick = 1 , coal = 0
// 1st : sticks += x - 1  , coal = coal
// 2nd ; stciks -= y  coal ++
// after n1st and m2nd ops
// sticks = nx - n - my + 1 , coal = m
// nx - n - my + 1 >= k , m = k
// 
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
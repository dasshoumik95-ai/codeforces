// Codeforces Problem: 1438B - Valerii Against Everyone
// Submission ID: 377597765
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Valerii_Against_Everyone
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
    int n ; cin >> n;
    vector<int> b(n) ;
    set<int> sett ;
    for(auto &i : b)
    {
        cin >> i ;
        sett.insert(i) ;
     }
    if(sett.size() < n )
        YES
    else NO 
 }
// 2^5 = 2^4 + 2^4 
//duplicate needed
 // l1can be equal to r1 so two subarray of same elem is same
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
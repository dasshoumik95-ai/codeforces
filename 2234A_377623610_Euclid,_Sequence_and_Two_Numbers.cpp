// Codeforces Problem: 2234A - Euclid, Sequence and Two Numbers
// Submission ID: 377623610
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: A_Euclid_Sequence_and_Two_Numbers
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
    int n ; cin >> n ;
    vector<ll> b(n) ;
    vecInput(b) ;
    sort(rall(b)) ;
     bool flag = true ;
    for(int i = 2 ; i < n ; i++)
    {
        if(b[i] != (b[i-2] % b[i-1]))
        {
            flag = false ;
            break ;
        }
    }
     if (b[n-1] <= 0) 
    {
        flag = false;
    }
    if(flag) 
        cout << b[0] << " " << b[1] << '\n' ;
     else 
        cout << -1 << '\n' ;
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
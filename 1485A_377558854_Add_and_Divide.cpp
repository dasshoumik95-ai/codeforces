// Codeforces Problem: 1485A - Add and Divide
// Submission ID: 377558854
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: A_Add_and_Divide
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
    ll a , b ;
    cin >> a >> b ;
     ll sol = INF ;
     for(int i = 0 ; i <= 40 ; i++)
    {
        ll temp = a , ops = 0;
        if(b+(ll)i==1) continue ;
        while(temp>0)
        {
            temp /= (b+i) ;
            ops ++ ;
        }
        sol = min(ops+(ll)i , sol) ;
    }
    cout << sol <<'\n' ;
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
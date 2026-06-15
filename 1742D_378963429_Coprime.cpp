// Codeforces Problem: 1742D - Coprime
// Submission ID: 378963429
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: D_Coprime
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
 vector<int>pairs[1001];
 void solve() {
    int n ; cin >> n ;
     vector<int> idx(1001,0) ;
     for(int i = 1 ; i <= n ; i++)
    {
        int x ; cin >> x ;
        idx[x] = i ; 
    }
    int ans = -1 ;
     for(int i = 1 ; i <= 1000 ; i++)
    {
        if(idx[i]==0)
            continue ;
         for(int j : pairs[i])
        {
            if(idx[j] != 0)
                ans = max(ans , idx[i] + idx[j]) ;
        }
    }
    cout << ans <<'\n' ;
 }
 int main() {
    fast;
    for(int i = 1 ; i <=1000 ;i++)
    {
        for(int j = 1 ; j <= 1000 ; j++)
        {
            if(__gcd(i,j) == 1)
                pairs[i].pb(j) ;
        }
    }
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
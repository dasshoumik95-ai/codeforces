// Codeforces Problem: 1447B - Numbers Box
// Submission ID: 377564427
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Numbers_Box
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
    ll n , m ;
    cin >> n >> m ;
     vector<vector<int>> a(n,vector<int>(m)) ;
    ll cnt = 0 , mini = 1e9 , cnt0 = 0 ;
    ll sum = 0 ;
    for(auto &row : a)
    {
        for(auto &element : row)
        {
            cin >> element ;
            if(element < 0)
            {
                cnt++ ;
            } 
            if(element == 0)
                cnt0++ ;
            mini = min((int)mini , abs(element)) ;
            sum += abs(element) ;
        }
    }
     if(cnt0 == 0 && cnt % 2 == 1)
        sum -= 2*mini ;
     cout << sum << '\n' ;
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
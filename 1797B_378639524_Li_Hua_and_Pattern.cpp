// Codeforces Problem: 1797B - Li Hua and Pattern
// Submission ID: 378639524
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: B_Li_Hua_and_Pattern
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
    int n , k ; cin >> n >> k ;
    vector<vector<int>> a(n,vector<int>(n)) ; 
     for(auto &coloums : a)
        for(auto &it : coloums)
            cin >> it ;
     int miss = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(a[i][j] != a[n-i-1][n-j-1])
                miss++ ;
         }
            }
    miss /= 2 ;
    if(miss>k)
        NO
    else if((k-miss)%2==0 || n%2!=0)
        YES
    else NO
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
// Codeforces Problem: 2236D - Brand New Tatar TV Show
// Submission ID: 378416432
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: D_Brand_New_Tatar_TV_Show
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
    int n , k ; 
    cin >> n >> k ;
    vector<int> a(n) ;
     vecInput(a) ;
    sort(all(a)) ;
     vector<pair<int,int>> values ;
     int l = 0 , r = 0 ;
     for(l = 0 ; l < n ; l++)
    {
         while(r < n && a[r] <= a[l] + k)
            r++ ;
         if(l == 0 || a[l] != a[l - 1]) 
            values.push_back({a[l], r - l});
            }
    reverse(all(values)) ;
        bool flag = false ;
    int m = values.size() ;
        vector<int> len(m, 0) ;
     r= 0  ; 
     for(int i = 0 ; i < m ; i++) 
    {
        int curr = values[i].first  ;
        int total= values[i].second ;
         while(r < i && values[r].first > curr + k) 
            r++ ;
                if(r < i)
            len[i] = 1 + len[r] ;
         else 
            len[i] = total - 1 ;
                if(len[i] % 2 != 0 ) 
            flag = true;
     }
     if(flag)
        YES 
    else 
        NO;
}
 //x+k>= y >=x 
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
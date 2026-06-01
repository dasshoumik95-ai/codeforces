// Codeforces Problem: 1859B - Olya and Game with Arrays
// Submission ID: 376853246
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round 1000
// Problem: Problem Name
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 void solve() {
    int n ; cin >> n ;
    ll sol = 0 ;
     vector<pair<int,int>> twomin ;
    int leastmini = 1e9 ;
     for(int i = 0 ; i < n ; i++)
    {
        int m ; cin >> m ;
        vector<int> a(m) ;
        int mini = 1e9 , mini2 = 1e9 ;
        for(int j = 0 ; j < m ; j++) 
        {
            cin >> a[j] ;
            if(mini > a[j])
            {
                mini2 = mini ;
                mini = a[j] ;
            }
            else if(a[j] < mini2)
                mini2 = a[j] ;
         }
        twomin.push_back({mini2,mini}) ;
           if(leastmini > mini)
            leastmini = mini ;
                          }
    sort(all(twomin)) ;
    for(auto it = 1 ; it < n ; it++)
    {
        sol += twomin[it].first ;
    }
     sol += leastmini ;
    cout << sol << '\n' ;
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
// Codeforces Problem: 2228A - Marisa Steals Reimu's Takeout
// Submission ID: 374755667
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
    int n ; cin >> n ;
    vector<int> a(n) ;
    int cnt1 = 0 , cnt2 = 0 , cnt0 = 0 ;
    for(int i : a)
    {
        cin >> i ;
        if(i==0)
            cnt0++ ;
         if(i==1)
            cnt1++ ;
         if(i==2)
            cnt2++ ;
     }
     int cnt3 = min(cnt1 ,cnt2) ;
    int sol = cnt0 +  cnt3 + (cnt1-cnt3)/3 + (cnt2-cnt3)/3 ;
     cout << sol <<'\n' ;
}
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
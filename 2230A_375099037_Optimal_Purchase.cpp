// Codeforces Problem: 2230A - Optimal Purchase
// Submission ID: 375099037
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
    ll a , b , c ;
    cin >> a >> b >> c ;
        ll gr3 = a/3 , gr2 = (a%3) /2 , gr1 = ((a%3)%2), gr0 = a%3 ;
    if(c < b)
         cout << c*(gr3 + (gr0 > 0 ? 1 : 0)) << '\n' ;
     else if(c < 2*b)
        cout <<  c*(gr3 + gr2 ) + b*gr1 <<'\n' ;
     else if(c < 3*b)
        cout << c*gr3 + b*gr0 <<'\n';
      else 
        cout << b*a <<'\n';
}
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
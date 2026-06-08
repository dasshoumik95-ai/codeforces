// Codeforces Problem: 1362A - Johnny and Ancient Computer
// Submission ID: 377800950
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Codeforces Round
// Problem: A_Johnny_and_Ancient_Computer
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
 ll rightshift(ll a , ll b) {
    if (a % b != 0) return -1 ;
     ll cnt = 0 ;
    while(a>b && (a&1)!= 1)
    {
        if ((a >> 3) >= b && (a % 8 == 0)) {
            a >>= 3; 
        }
        else if ((a >> 2) >= b && (a % 4 == 0)) {
            a >>= 2; 
        }
        else if ((a >> 1) >= b && (a % 2 == 0)) {
            a >>= 1; 
        }
        else return -1 ;
        cnt++ ;
    }
    if (a != b) return -1;
        return cnt;
}
 ll leftshift(ll b , ll a ){ // b > a
     if (b % a != 0) return -1 ;
     ll diff = b / a , pow2 = 0 , cnt = 0;
     if((diff & (diff -1)) != 0) return -1 ;
     while(a!=b)
    {
        ll ratio = b / a;
                ll multiplier = 2;
        if (ratio >= 8) multiplier = 8;
        else if (ratio >= 4) multiplier = 4;
         a <<= (multiplier == 8 ? 3 : (multiplier == 4 ? 2 : 1));
        cnt++;
    }
     return cnt ;
}
 void solve() {
    ll a , b ;
    cin >> a >> b ;
     if(b > a)
        cout << leftshift(b , a) << '\n' ;
     else if( a== b)
        cout << 0 << '\n' ;
     else
        cout << leftshift(a , b) << '\n' ;
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
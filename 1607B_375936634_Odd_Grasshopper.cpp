// Codeforces Problem: 1607B - Odd Grasshopper
// Submission ID: 375936634
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
    ll x , n ;
    cin >> x >> n ;
    ll n1 = 0 ;
    if(n%4==2) n1 = -1 ;
    if(n%4==3) n1 = - n -1 ;
    if(n%4==0) n1 = 0;
    if(n%4==1) n1 = n ;
        if(x%2==0)
        n1 = - n1 ;
     cout << x + n1 << '\n';
}
/*
    even , -1
    odd , +2
    odd , +3
    even , -4
    even , -5
    odd , 6
    odd 7
    even
       odd , 1
    even , -2
    even , -3
       1 45 89 1213... 4n-3 + 4n - 4
    23 67 1011 ... 4n-2 and 4n-1
      // 1 -2 -3 4 = 0
*/
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
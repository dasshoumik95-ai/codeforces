// Codeforces Problem: 1831B - Array merging
// Submission ID: 376873619
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
     vector<int> a(n) , b(n) ;
    set<int> unique_elements ;
     map<int,int> freqa , freqb ;
     int curr = 0-1 , cnt = 0 ;
    for(int &i : a)
    {
        cin >> i ;
        unique_elements.insert(i);
         if(curr==i) 
        {
            cnt++ ;
        }
        else cnt = 1 ;
        freqa[i] = max(cnt,freqa[i]) ;
         curr = i ;
             }
     curr = -1 , cnt = 0 ;
    for(int &i : b)
    {
        cin >> i ;
        unique_elements.insert(i);
         if(curr==i) 
        {
            cnt++ ;
        }
        else cnt = 1 ;
        freqb[i] = max(cnt,freqb[i]) ;
         curr = i ;
    }
    int sol = 0 ;
    for(auto x : unique_elements)
        sol = max (sol , freqa[x] + freqb[x]) ;
    cout << sol << '\n' ;
}
int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
// 1 4 7 4 7 3
// 7 7 4 7 2
 // 1 4 7 7 7 4 4 7 7 3 2
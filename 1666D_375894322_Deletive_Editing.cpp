// Codeforces Problem: 1666D - Deletive Editing
// Submission ID: 375894322
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
    string s, t;
    cin >> s >> t;
     vector<int> tfreq(26, 0);
    for (char c : t) 
    {
        tfreq[c - 'A']++;
    }
     int sidx = s.size() - 1;
    int tidx = t.size() - 1;
     while (sidx >= 0 && tidx >= 0) 
    {
        if (s[sidx] == t[tidx]) 
        {
            tfreq[s[sidx] - 'A']--;
            tidx--;
        } 
        else 
        {
            if (tfreq[s[sidx] - 'A'] > 0) 
            {
                cout << "NO\n";
                return;
            }
        }
        sidx--; 
    }
     if (tidx < 0) 
        cout << "YES\n";
    else 
        cout << "NO\n";
    }
// determined
// deninmrt
// trmnined
 int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
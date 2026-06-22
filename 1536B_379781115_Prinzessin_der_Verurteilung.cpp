// Codeforces Problem: 1536B - Prinzessin der Verurteilung
// Submission ID: 379781115
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 //    ================== ⚡          ⚡ ==================
// Author: Shoumik 25CS10034
// Contest: Contest Name
// Problem: B_Prinzessin_der_Verurteilung
// Rating: Rating
// =============================================================
 #define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 // Loops (0-n), (n-0), (1-n), (n-1)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define for0(i, n) for(int i = 0; i < n; ++i)          // 0 to n-1
#define forn(i, n) for(int i = n; i >= 0; --i)         // n down to 0
#define for1(i, n) for(int i = 1; i <= n; ++i)         // 1 to n
#define for1n(i, n) for(int i = n; i >= 1; --i)        // n down to 1
 // Vector Helpers
#define vecInput(v) for(auto &i : v) cin >> i;
#define vecOutput(v) for(const auto &i : v) cout << i << ' '; cout << '\n';
 // Fast I/O Helpers
#define YES cout << "YES" << '\n';
#define NO cout << "NO" << '\n';
 // Debugger (Runs locally with -DLOCAL flag)
#ifdef LOCAL
#define deb(x) cerr << #x << " = " << x << endl;
#else
#define deb(x)
#endif
 const int MOD = 1e9 + 7;
const ll INF = 1e18;
 // Safe Modular Arithmetic Helpers
ll modAdd(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll modMul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
  int get_id1(char c) {
    return c - 'a';
}
 int get_id2(char c1, char c2) {
    return 26 + (c1 - 'a') * 26 + (c2 - 'a');
}
 int get_id3(char c1, char c2, char c3) {
    return 26 + 676 + (c1 - 'a') * 676 + (c2 - 'a') * 26 + (c3 - 'a');
}
 void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
     vector<bool> visited(18279, false);
      for0(i, n) 
    {
         visited[get_id1(s[i])] = true;
         if (i + 1 < n) 
            visited[get_id2(s[i], s[i+1])] = true;
                 if (i + 2 < n) 
            visited[get_id3(s[i], s[i+1], s[i+2])] = true;
            }
      for (char c = 'a'; c <= 'z'; ++c) {
        if (!visited[get_id1(c)]) {
            cout << c << '\n';
            return;
        }
    }
      for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = 'a'; c2 <= 'z'; ++c2) {
            if (!visited[get_id2(c1, c2)]) {
                cout << c1 << c2 << '\n';
                return;
            }
        }
    }
      for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = 'a'; c2 <= 'z'; ++c2) {
            for (char c3 = 'a'; c3 <= 'z'; ++c3) {
                if (!visited[get_id3(c1, c2, c3)]) {
                    cout << c1 << c2 << c3 << '\n';
                    return;
                }
            }
        }
    }
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
// Codeforces Problem: 2157B - Expansion Plan 2
// Submission ID: 359729611
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
         string s; 
        cin >> s;                
         int cnt8 = 0, cnt4 = 0;
        for (char c : s)
        {
            if (c == '8') cnt8++;
            else cnt4++;
        }
         x = abs(x);
        y = abs(y);
         if ( ((x <= cnt4 + cnt8) && (y <= cnt4 + cnt8)) && (x + y <= cnt4 + 2 * cnt8))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
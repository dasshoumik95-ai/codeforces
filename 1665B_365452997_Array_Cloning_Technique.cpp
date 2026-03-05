// Codeforces Problem: 1665B - Array Cloning Technique
// Submission ID: 365452997
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int num = 0 ;
        int n ; cin >> n ;
         map<int , int> a;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            a[x]++;
        }
                int maxoccur = 0;
        for(auto &p : a)
        {
            maxoccur = max(maxoccur, p.second);
        }
        int ans = 0;
        while(maxoccur < n)
        {
            int add = min(maxoccur, n - maxoccur);
            ans = ans + 1 + add;
            maxoccur += add; // max occur to become n;
        }
        cout << ans << endl;
     }
 }
// Codeforces Problem: 1837B - Comparison String
// Submission ID: 363540525
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
     while(t--)
    {
        int n ; cin >> n ;
        string s ;
        cin >> s ;
         int cnt =1, maxk = 1;
         for(int i = 1 ; i< n ; i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
             }
             else cnt = 1;
             maxk = max(maxk , cnt);
        }
         cout << maxk + 1 << endl;
    }
 }
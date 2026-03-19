// Codeforces Problem: 2192A - String Rotation Game
// Submission ID: 367350540
// Language: C++23 (GCC 14-64, msys2)

// 800
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        string s ; cin >> s ;
         int cnt = 1;
        bool same = false;
         for(int i = 1 ; i < n ; i++)
        {
                        if(s[i] != s[i-1])
                cnt++;
             else
                same = true;
        }
          if(s[0] == s[n-1] || !same)
            cout << cnt << endl;
         else
            cout << cnt + 1 << endl;
    }
}
// abbabcba
// check 6 
// abba - bcba
// bcba abba
// nothing else can be done
// solution 6
// abbabcbc 
// solutio9n 7 
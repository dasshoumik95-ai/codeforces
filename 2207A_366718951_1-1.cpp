// Codeforces Problem: 2207A - 1-1
// Submission ID: 366718951
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
     while(t--)
    {
         int n ; cin >> n;
        string s ; cin >> s;
         int cn1 = 0;
        for(char c : s) 
        {
            if(c == '1')
                cn1++;
        }
          string temp = s;
        int len0 = 0;
                 for(int i = 1; i < n-1; i++)
        {
            if(s[i] == '0' && s[i-1] == '1' && s[i+1] == '1')
            {
                temp[i] = '1';
                len0++;
            }
        }
         s = temp;
        int len1 = 0, len0rem = 0;
          for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                len1++;
            else
            {
                if(len1 >= 3)
                    len0rem += (len1 - 1) / 2;  
                len1 = 0;
            }
        }
          if(len1 >= 3)
            len0rem += (len1 - 1) / 2;          
         cout << cn1 + len0 - len0rem << " " << cn1 + len0 << endl ;
       }
}
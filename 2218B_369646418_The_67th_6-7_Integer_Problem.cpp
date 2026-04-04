// Codeforces Problem: 2218B - The 67th 6-7 Integer Problem
// Submission ID: 369646418
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t ; cin >> t ;
    while(t--)
    {
                        {
            vector<int> a(7);
            for(int &i : a)
                cin >> i ;
             sort(a.begin(),a.end());
            int sol = 0 ;
            for(int i = 0 ; i < 6 ; i++)
            {
                sol += (-a[i]) ;
            }
             cout << sol + a[6] << endl ;
        }
      }
}
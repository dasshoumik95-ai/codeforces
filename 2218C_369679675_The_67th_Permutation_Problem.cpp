// Codeforces Problem: 2218C - The 67th Permutation Problem
// Submission ID: 369679675
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
        int n ; cin >> n ;
        int r = 3*n ;
        for(int i = 1 ; i <= n ; i++)
        {
            cout << i <<" " << r - 1 << " " << r << " "  ;
            r -= 2 ;
        }    
                    cout << endl ;
    }
}
 // 3n 
// 1 2 3 4 5 6
// 2 + 5
// 1 5 6 2 3 4
// 5 3
 // n , n + 2
 // 9
// 1 8 9 2 6 7 3 4 5
// 8 + 6 + 4
 // 3n -1 . 3n-3 ...
  // 12
// 1 11 12 2 9 11
 // 8 7 6b
//
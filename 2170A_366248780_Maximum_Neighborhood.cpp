// Codeforces Problem: 2170A - Maximum Neighborhood
// Submission ID: 366248780
// Language: C++23 (GCC 14-64, msys2)

// 800
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
        int n ; cin >> n ;
         if(n==1)
            cout << 1 << endl;
         else if(n==2)
            cout << 9 << endl;
         else if(n==3)
            cout << 29 << endl;
         else if(n==4)
            cout << (4 * n * n) - n - 4 << endl ;
         else 
            cout << 5 * n * n - 5 * n - 5 << endl; 
    }
}
/*
         1 2
        3 4         4+3+2
         1 2 3
        4 5 6
        7 8 9       5+8+2+4+6
         1  2  3  4  5
        6  7  8  9  10
        11 12 13 14 15
        16 17 18 19 20    24 + 19 + 23 + 25
        21 22 23 24 25    14 + 18+ 20+19 +24
  */
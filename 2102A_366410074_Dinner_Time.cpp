// Codeforces Problem: 2102A - Dinner Time
// Submission ID: 366410074
// Language: C++23 (GCC 14-64, msys2)

// 800
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
         int n , m , p , q ;
        cin >> n >> m >> p >> q ;
                     if(n%p == 0 && (n/p)*q != m)
            cout << "NO" << endl;
         else cout << "YES" << endl;
     }
}
  /*
        a1 a2 a3 a4 a5 = m 
        a1 + a2 + a3 = q
             a2 + a3 + a4 
                  a3 + a4 + a5  // p = 3 toal it 5 + 1 - 3
        so after p -1 terms should be equal
        p tell number of unique element
                         */
// Codeforces Problem: 1761A - Two Permutations
// Submission ID: 367701585
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
  using namespace std ;
 void solve()
{
    int n , a , b ;
    cin >> n >> a >> b ;
     if(a==b && a==n)
        cout << "YES" <<'\n' ;
     else if( a + b <= n - 2)
        cout << "YES" << '\n' ;
     else 
        cout << "NO" << '\n' ;
  }
   int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        solve();
    } 
}
  /*
        1 2 3 .... n-1 n
        1 2 3 .... n-1 n
        -----      -----
        prefix     suffix common
        = a        = b
          a = b = n
         or a = 1 b = 1
         this is the least case
 */
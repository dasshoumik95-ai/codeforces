// Codeforces Problem: 1806A - Walking Master
// Submission ID: 367862704
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
  using namespace std ;
 void solve()
{
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if(c > (a + (d- b))  || (c -a) > (d- b) || d < b)
        cout << -1 << endl ;
     else 
        cout << d-b +   a +(d-b) - c << endl ;
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
  // he can move left and diagonally up 
// so if he is in a,b
// he can to x<=a
// he can move to a+ n , b + n ;
// ans also left of a +n ; x <= a+n and y >= b  ;
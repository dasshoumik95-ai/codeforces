// Codeforces Problem: 2197A - Friendly Numbers
// Submission ID: 367549491
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
  using namespace std ;
 int d(int y)
{
    int sum = 0 ;
    while(y!=0)
    {
        sum += y % 10 ;
        y /= 10 ;
    }
    return sum ;
}
void solve()
{
    int x ; cin >> x ;
    int cnt = 0 ;
    for(int y = x ; y <= x + 81 ; y++)
    {
        if(y == d(y) + x)
            cnt++ ;
    }
    cout << cnt << endl ;
 }
// TC : O(82*9)
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
  
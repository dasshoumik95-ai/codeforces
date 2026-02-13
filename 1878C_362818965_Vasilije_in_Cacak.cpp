// Codeforces Problem: 1878C - Vasilije in Cacak
// Submission ID: 362818965
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        long long n , k , x ;
        cin >> n >> k >> x ;
         if(((k*(2*n - k + 1)) >= 2*x)&&( 2*x >= (k+1)*(k)))
            cout << "YES" << endl;
          else 
            cout << "NO" << endl;
    }
}
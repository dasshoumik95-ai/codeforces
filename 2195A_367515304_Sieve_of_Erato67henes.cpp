// Codeforces Problem: 2195A - Sieve of Erato67henes
// Submission ID: 367515304
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
bool IsPrime()
{
    for(int i = 2 ; i <= sqrt(67) ; i++)
    {
        if(67%i==0)
            return false;
         else return true ;
    }
}
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n , cnt2 = 0 ; 
            cin >> n ;
        while(n--)
        {
            int x ;
                cin >> x ;
            if(x==67)
                cnt2 = 1 ;
        }
        if(cnt2 != 0 )
            cout << "yes" << '\n' ;
         else
            cout << "NO" << '\n' ;
    }
                 }
         
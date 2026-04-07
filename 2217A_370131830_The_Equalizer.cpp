// Codeforces Problem: 2217A - The Equalizer
// Submission ID: 370131830
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
        int n , k; 
        cin >> n >> k ;
        int sum = 0 ;
        vector<int> a(n) ;
        for(auto &i : a) {
            cin >> i ;
            sum += i ;
        }
         if(sum%2==1)
            cout << "YES" <<'\n' ;
         else if(sum%2==0)
        {
            if(k%2==1 && n%2==1)
                cout << "NO\n" ;
             else
                cout << "YES" <<'\n' ;   
        }
      }
}
// odd shaunak wins
// even then use k 
 // 67 67
// 66 67
// 0 67 yash
// 0 66 shanuak change it to 
// 0 67
// 11 ter
 // 2 2
// 3 3
// 2 3 *
// 2 2
// 1 2 *
// 2 2
// 1 2 *
// 1 1
// 0 1 *
// 0 0  shaunak losses
// Codeforces Problem: 2178B - Impost or Sus
// Submission ID: 366159033
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {  
        string r ; cin >> r;
         int n = r.size();
        int seglen = 0 , maxseg = 0 ;
         int sol = 0;
         if(r[0]=='u')
        {
            sol++ ;
            r[0]= 's' ;
        }
                     if(r[n-1]=='u')
        {
            sol++ ;
            r[n-1]= 'u' ;
        }
                     for(int i = 1 ; i <= n-2 ; i++)
        {
            if(r[i] == 'u')
            {
                seglen++;
            }
            else
            {
                sol += seglen / 2;
                seglen = 0;
            }
        }
         sol += seglen / 2;  
                       cout << sol << endl ;
    }
}
 // uuuuu
// susus
// uuuuuu
// sususs
// uuuuuuu
// sususus
  // uusuusuu
//susussus
// //uu
 // uuuuuuuuuuu
  //s uuuuuu s
//s ususus s
 //s uuuuu s
//s ususu s
 // s uuus uuusuu u
// s uuus uuusuu s (sol= 1)
//  3/2 + 3/2 + 2/2 + 1 = 4
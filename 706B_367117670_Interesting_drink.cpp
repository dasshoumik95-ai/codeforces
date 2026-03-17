// Codeforces Problem: 706B - Interesting drink
// Submission ID: 367117670
// Language: C++23 (GCC 14-64, msys2)

//1100
#include<bits/stdc++.h>
using namespace std;
 int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n ; cin >> n ;
    vector<int> x(n) ;
    for(int &i : x )
        cin >> i;
     sort(x.begin(),x.end());
      int q ; cin >> q ;
     while(q--)
    {
        int m , ct = 0 ; cin >> m ;
         int i = 0 , j = n - 1 ;
         while(i<j)
        {
            int mid = i + (j-i)/2 ;
             if(x[mid] <= m)
            {
                ct = mid + 1;
                i = mid + 1 ;
            }
                            else 
                j = mid - 1;
        }
         if(i < n && x[i] <= m)
        ct = i + 1;
          cout << ct << endl;
    }
  }
// O(n + q*n) // O(`0^10) > 2 * 10^8 // TLE
 // new binary // O(n + nlogn + qlogn) // O(10^5 log 10^5)
// Codeforces Problem: 2160A - MEX Partition
// Submission ID: 366520650
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        vector<int> a(n) ;
         for(int i = 0 ; i < n ; i++)
            cin >> a[i] ;
         sort(a.begin() , a.end());
        a.erase(unique(a.begin(), a.end()), a.end()); // remove duplicates
        int m = a.size();
         int mex = m; // fallback: all 0..m-1 present
         if(a[0] != 0)
            cout << 0 << "\n";
         else
        {
            for(int i = 0 ; i < m-1 ; i++)
            {
                if(a[i+1] - a[i] > 1)
                {
                    mex = a[i] + 1;
                    break;
                }
            }
            cout << mex << "\n";
        }
    }
}
   //         a[n] = n + 1;
 //         sort(a.begin() , a.end());
 //         for(int i = 0 ; i < n+1 ; i++)
//         {
//             if(a[i]!=i)
//             {
//                 cout << i << endl;
//                 break;
//             }
            //         }
                        // O(n + nlogn)
// O(100  + 100 log 100) 
 // 0 2 1 3 4  sol = 5
 // 0 
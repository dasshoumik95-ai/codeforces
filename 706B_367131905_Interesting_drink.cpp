// Codeforces Problem: 706B - Interesting drink
// Submission ID: 367131905
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
    int maxval = 0 ;
    for(int &i : x )
    {
        cin >> i;
        maxval = max(maxval,i);
    }
     vector<int> c(maxval + 1 ,0);
    for(auto i : x)
        c[i]++ ;
     for(int i = 1 ; i <= maxval ; i++)
        c[i] += c[i-1] ;
      int q ; cin >> q ;
    while(q--)
    {
        int m ; cin >> m ;
         cout << (m >= maxval ? n : c[m]) << endl;
    }
      }
// O(n + q*n) // O(`0^10) > 2 * 10^8 // TLE
// space : O(n)
 // new binary // O(n + nlogn + qlogn) // O(10^5 log 10^5)
// space O(n)
/*
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
        */
  // 3 10 8 6 11
 // vector of 12 indexes
// 0 0 0 1 0 0 1 0 1 0 1 1  
// 0 0 0 1 0 o 2 0 3 0 4 5 prefix sum
// return mt element 
 // O(n+q)
// space : O(n+ maxvalue)
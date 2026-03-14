// Codeforces Problem: 381A - Sereja and Dima
// Submission ID: 366710952
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     {
        int n ; cin >> n ;
        vector<int> a(n);
         for(int &i : a)
            cin >> i ;
         int sum1 = 0 , sum2 = 0 ;
         int i = 0 , j = n-1 , k = 0;
        while(i <= j)
        {
            int val = 0;
             if(a[i]>a[j])
            {
                val = a[i];
                i++;
            }
             else
            {
                val = a[j];
                j--;
            }
              if(k%2==0)
                sum1 += val;
             else
                sum2 += val;
             k++;
         }
         cout << sum1 << " " << sum2 << endl;
    }
    }
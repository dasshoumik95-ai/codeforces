// Codeforces Problem: 1675B - Make It Increasing
// Submission ID: 365444799
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n ; cin >> n ;
                vector<int> a(n);
        for(int &i : a)
            cin >> i ;
         vector<int> b = a;
                  {
            int cnt = 0 ;
            bool check = true;
            for(int i = n-1 ; i >= 0 ; i-- )
            {
                if(a[i] < i )
                {
                    check = false;
                    break;
                }
                        }
            for(int i = n-1 ; i > 0 ; i-- )
            {
                while(a[i]<=a[i-1])
                {
                    a[i-1] /= 2;
                    cnt++;
                                        if(a[i-1]==0)  break;
                            }
                                if(a[i] == 0 && a[i - 1] == 0)
                {
                    check = false;
                    break;
                }
            }
            cout << (check? cnt : -1)  << endl;
        }
      }
}
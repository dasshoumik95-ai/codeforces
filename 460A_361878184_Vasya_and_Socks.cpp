// Codeforces Problem: 460A - Vasya and Socks
// Submission ID: 361878184
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n , m ;
    cin >> n >> m ;
        int days = 0;
     if(n<m)
        cout << n ;
     else if(n==m)
        cout << n + 1 ;
        else
    {
        while(n>0)
        {
            days++;
            n--;
             if(days % m == 0)
                n++;
        }
        cout << days;
    }
      }
  
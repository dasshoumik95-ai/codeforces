// Codeforces Problem: 1869A - Make It Zero
// Submission ID: 365613021
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n ;
        vector<int>a(n);
                for(int &i : a)
            cin >> i;
          if(n%2==0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
         }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }
     }
}
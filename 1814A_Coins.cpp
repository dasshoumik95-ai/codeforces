// Codeforces Problem: 1814A - Coins
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
        long long n, k;
        cin >> n >> k;
         if(k % 2 == 0 && n % 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
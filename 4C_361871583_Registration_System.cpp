// Codeforces Problem: 4C - Registration System
// Submission ID: 361871583
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n ; cin >> n;
    string s;
    unordered_map<string ,int > hasH;
        while(n--)
    {
                        cin >> s;
         hasH[s] += 1;
               if(hasH[s] > 1)
        {
            for(auto i : s)
            cout << i ;
            cout << hasH[s] - 1 << endl;
        }
        else 
            cout << "OK" << endl;
        }
    }
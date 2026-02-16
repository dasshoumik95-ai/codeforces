// Codeforces Problem: 2196A - Game with a Fraction
// Submission ID: 363277293
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
     while(t--)
    {
        long long p, q;
        cin >> p >> q;
         if(3*p == 2*q)
            cout << "Bob" << endl;
        else if(p == q)
            cout << "Alice" << endl;
        else if(3*p < 2*q)
            cout << "Alice" << endl;
        else if(p<q && min(3LL * p , 2LL * q) >= q-p)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}
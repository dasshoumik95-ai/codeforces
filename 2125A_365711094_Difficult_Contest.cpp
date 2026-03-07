// Codeforces Problem: 2125A - Difficult Contest
// Submission ID: 365711094
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
         sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
         cout << s << endl;
    }
}
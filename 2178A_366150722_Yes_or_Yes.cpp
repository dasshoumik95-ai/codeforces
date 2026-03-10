// Codeforces Problem: 2178A - Yes or Yes
// Submission ID: 366150722
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {  
        string s ; cin >> s;
        int cnt = 0;
        for(char i : s)
        {
            if(i=='Y')
                cnt++;
        }
        if(cnt>1)
            cout << "NO" << endl;
         else
            cout << "YES" << endl;
               }
}
//    YNNYYN
//    YNNYN\
//    YNYN  YYN
//    YY
// Codeforces Problem: 266A - Stones on the Table
// Submission ID: 365838102
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    int n ; cin >> n ;
    string s ; cin >> s;
    int cnt = 0;
        for(int i = 1 ; i < n ; i++)
    {
        if(s[i]==s[i-1])
            cnt++;
    }
    cout << cnt  ;
}
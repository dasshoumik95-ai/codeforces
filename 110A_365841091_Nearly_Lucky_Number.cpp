// Codeforces Problem: 110A - Nearly Lucky Number
// Submission ID: 365841091
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     long long n ;
    cin >> n ;
    int cnt = 0 ;
    while(n!=0)
    {
        if(n%10 == 7 || n%10 == 4)
            cnt++;
         n/=10;
    }
     if(cnt == 7 || cnt == 4)
        cout << "YES" ;
     else
        cout << "NO" ;
 }
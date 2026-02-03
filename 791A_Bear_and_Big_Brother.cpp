// Codeforces Problem: 791A - Bear and Big Brother
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int a,b;
    cin >> a >> b;
    int yr=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        yr++;
    }
    cout << yr;
}
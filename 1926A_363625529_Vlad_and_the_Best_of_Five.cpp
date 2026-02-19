// Codeforces Problem: 1926A - Vlad and the Best of Five
// Submission ID: 363625529
// Language: C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t ; cin >> t ; 
        while(t--)
    {
        string s ;
        cin >> s ; 
                int cntA = 0;
        for(auto i : s)
        {
            if(i=='A')
                cntA++;
        }
        if(cntA>=3)
        cout << "A" <<endl; 
        else
        cout << "B" <<endl; 
    } 
     return 0;
}
// Codeforces Problem: 2110B - Down with Brackets
// Submission ID: 365745041
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<string>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        string s ; cin >> s;
         int unit = 0 , cntl= 0 , cntr = 0 ;
         for(int i : s)
        {
            if(i=='(')
            {
                cntl++;
                continue;
            }    
             else
                cntr++;
             if(cntl == cntr)
                unit++;
                     }
         if(unit>1)
            cout << "YES" <<endl ;
         else
            cout << "NO" <<endl ;
     }
}
// Codeforces Problem: 2208A - Bingo Candies
// Submission ID: 366757150
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
        int n ; cin >> n ;
        map<int,int> freq;
         int x ;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j< n ; j++)
            {
                cin >> x ;
                freq[x]++;
            }
        }
         bool check = true ;
         for(auto x : freq)
        {
            if(x.second > (n)*(n-1))
            {
                check = false;
                break;
            }
                        }
         if(check)
            cout << "YES" << endl;
                    else
            cout << "NO" << endl;
        }
}
/*
1 1 . . . 0
0 1 . . . 1
1 0 . . . 1
1 1 . . . 1
1 1 . . . 1
1 1 1 1 0 1
 */
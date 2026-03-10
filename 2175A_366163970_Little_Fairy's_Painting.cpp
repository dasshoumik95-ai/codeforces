// Codeforces Problem: 2175A - Little Fairy's Painting
// Submission ID: 366163970
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
        int n ; 
        cin >> n ;
         vector<int> a(n);
         for(int &i : a)
            cin >> i ;
         sort(a.begin(), a.end());
        int distinct = unique(a.begin(), a.end()) - a.begin();   //( t = O(n logn) , s - O(1))
         for( int i : a)
        {
            if(distinct <= i)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
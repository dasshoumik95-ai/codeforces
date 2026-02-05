// Codeforces Problem: 2189A - Table with Numbers
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
        int n, h, l;
        cin >> n >> h >> l;
         if(h>l)
            swap(h,l);
                int cnth=0 , cntl=0 ;
        vector<int>a(n);
        for(int i =0 ; i< n ; i++)
        {
            cin >> a[i];
            if(a[i]<=h)    cnth++;
             if(a[i]<=l)    cntl++;
         }
        cout << min(cnth,cntl/2) << endl;
    }
}
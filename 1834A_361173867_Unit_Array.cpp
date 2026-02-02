// Codeforces Problem: 1834A - Unit Array
// Submission ID: 361173867
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; 
    cin >> t;
     while(t--)
    {
        int n; cin >> n;
        int cnt1=0 , cnt2=0;
        vector<int> a(n);
        for(int &i : a)
        {
            cin >> i;
            if(i==-1)
                cnt1++;
            else
                cnt2++;
        }
        int opDone =0;
        while(cnt1 % 2 != 0 || cnt2 < cnt1)
        {
                        cnt2++;
            cnt1--;
            opDone++;
                                }
        cout << opDone << endl;    
            }
}
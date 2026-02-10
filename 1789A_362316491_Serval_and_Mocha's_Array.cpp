// Codeforces Problem: 1789A - Serval and Mocha's Array
// Submission ID: 362316491
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
        int n; 
        cin >> n;
         vector<int> a(n);
        for(int &i : a)
            cin >> i ;
         int mark = 0;
         for(int i =0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(__gcd(a[i],a[j]) <=2) {
                    mark++;
                    break;
                }
            }
        }
         if(mark>0)
            cout << "Yes" << endl ;
        else
            cout << "No" << endl;
             }
 }
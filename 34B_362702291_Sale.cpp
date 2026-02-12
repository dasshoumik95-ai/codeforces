// Codeforces Problem: 34B - Sale
// Submission ID: 362702291
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main()
{
    int n , m ; 
    cin >> n >> m;
    int sum = 0;
     vector<int> a(n);
     for(int &i : a)
        cin >> i ;
     sort(a.begin(), a.end());
     for(int i =0 ; i < m ; i++)
    {    if(a[i]<0)
        sum = sum + abs(a[i]);
    }
     cout << sum ;
}
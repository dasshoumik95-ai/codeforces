// Codeforces Problem: 2183A - Binary Array Game
// Submission ID: 365808818
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<vector>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t ; cin >> t ;
    while(t--)
    {
        int n ; cin >> n ;
        vector<int> a(n);
        for(int &i : a)
            cin >> i ;
         if(a[0]==0 && a[n-1]==0)
            cout << "BOB" << endl;
         else
            cout << "ALICE" << endl;
     }
}
  // if theres is a 0 in subarray the subarray = {1}
// else no zero subarray ={0}
 //alice wants to win so he consumes 0s in array and make non zero array
// 1 1 0 0 alice
// 1 1  consumes 0 bob
// 0 alice wins
  // no zero alice wins
// 1 1 1 1
// 0
 // 1 0 1 0 1 0 
// 1 1
// 0
 // 0 1 0 1
// 1     1
//alice wins
 // 0 1 0 0
// 0 1      or 1    0 
// so bob wins
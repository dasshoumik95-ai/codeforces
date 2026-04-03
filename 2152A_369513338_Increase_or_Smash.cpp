// Codeforces Problem: 2152A - Increase or Smash
// Submission ID: 369513338
// Language: C++23 (GCC 14-64, msys2)

// brute 
//9 9 3 2 4 4 8 5 3
//
//7 7 1 0 2 2 6 3 1
//7 7 1 7 2 2 6 3 1 // change 0 to 9
//6 6 0 6 1 1 5 2 0
//6 6 6 6 1 1 5 2 6 // change 0 to 
//5 5 5 5 0 0 4 1 5
//5 5 5 5 4 4 4 1 5 // change 0 to 5
//4 4 4 4 4 4 3 0 4
//4 4 4 4 4 4 3 4 4 // change 0 to 4
//
//
//1 1 1 1 1 1 0 1 1
//1 1 1 1 1 1 1 1 1 // change 0 to 1
//0 0 0 0 0 0 0 0 0 // intial array 
 //2 -- 0 bnaya (1step + 1bonus) // 3 became 1 and 1 -- 0 (1step + bonus) // similary 4 becomes 1(1step +bonus)
// eventually every element gets to become 0 except the big number which becomes 0 only from inital 
// sol = unique elements - 1 ;
  // 1 3 3
// 0 2 2
// 2 2 2
// 0 0 0 // initial array
    #include<vector>
#include<algorithm>
#include<iostream>
 using namespace std ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t ; cin >> t ; //t =1000
    while(t--)
    {
        int n ; cin >> n ; // n = 100
        vector<int>a(n);
         for(int &i : a)
            cin >> i ;
         sort(a.begin(), a.end());       // consecutive     
        int ans = unique(a.begin(), a.end()) - a.begin();
         cout << 2*ans - 1 << endl;
     }
 }
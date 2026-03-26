// Codeforces Problem: 2202A - Parkour Design
// Submission ID: 368275638
// Language: C++23 (GCC 14-64, msys2)

//800
#include<iostream>
#include<vector>
using namespace std ; 
typedef long long ll ;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     ll t ; cin >> t ;
    while(t--)
    {
        ll x , y ;
        cin >> x >> y ;
                  if((x+y)%3==0 && x>y)
        {
            if(y<0 && x < abs(4*y)) 
                cout << "NO" << endl ;
             else if(y==0 && x < 3)
                cout << "NO" << endl ;
             else if(y>0 && x < 2*y)
                cout << "NO" << endl ;
             else 
                cout << "YES" << endl ;
         }
                         else
                cout << "NO" << endl ;
                }
      }
 //  0,0 -- x,y
// x+2,y+1
// x+3 , y
// x+4 , y -1 
// means at evrystep sum + 3
// initial sum = 0 so final x+y%3 == 0 and x is increasing faster than y
// for every y < -a ; x >= 4*a 
// Y = 0
 // Y
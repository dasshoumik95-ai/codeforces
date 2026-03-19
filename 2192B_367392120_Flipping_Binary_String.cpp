// Codeforces Problem: 2192B - Flipping Binary String
// Submission ID: 367392120
// Language: C++23 (GCC 14-64, msys2)

// 1100 string 
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
        string s ; cin >> s ;
        int cnt1 = 0 ;
        for(char i : s)
        {
            if(i == '1')
                cnt1++ ;
         }
        if(cnt1 % 2 == 1 && n % 2 == 1)
            cout << -1 << endl ;
         else if(cnt1 == 0)
            cout << 0 << endl ;
        else 
        { 
            cout << (cnt1 % 2 == 0 ? cnt1 : n - cnt1) << endl ;
             for(int i = 0 ; i < n ; i++)
            {
                if(cnt1 % 2 == 0 && s[i] == '1')
                    cout << i+1 << " " ;
                 else if (cnt1 % 2 == 1 && s[i] == '0')
                    cout << i + 1 << " ";
             }
            cout << endl ;
        }
              }
}
 /*
    1100011
    1 011100    1 011100
    0000011     00 00011
    1111110     111111 0
    0000000     0000001 . // operated on position of one
     0001100
    1111011
     1100
    1011
    0000
      11000
    10111
    00000
     100
    111
      10
    00
         111000
    000011
    111110
    000000   /// operated on position of 0s
     1110000
    0000111
    1111100
    not possible 1's odd 0's even
      10010
    11101
    00000
  */
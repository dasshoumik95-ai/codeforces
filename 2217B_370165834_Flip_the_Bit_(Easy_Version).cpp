// Codeforces Problem: 2217B - Flip the Bit (Easy Version)
// Submission ID: 370165834
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     int t; cin >> t; //1e4
    while(t--)
    {
        int n, k;
        cin >> n >> k;
         vector<int> a(n);
        for(int &i : a) cin >> i;
         int p; cin >> p;
        p--;
         int x = a[p];
         int left_seg = 0, right_seg = 0;
         // left side
        for(int i = 0; i < p; i++)
        {
            if(a[i] != x && (i == 0 || a[i-1] == x))
                left_seg++;
        }
         for(int i = p+1; i < n; i++)
        {
            if(a[i] != x && a[i-1] == x)
                right_seg++;
        }
         cout << 2 * max(left_seg, right_seg) << '\n';
    }
}
 // include p-1 always
// 0 1 0
// 1 0 0
// 1 1 1
 // 0 1 0* 1 0 1
// 0 0 1 0 1 0
// 0 0 0 1 0 0
// 0 0 1 0 0 0
// 0 0 0 0 0 0
  // 0 1 1 0 1* 1 0 1 0 0 1 0 1 0 1 0 1
// right side more change need
// 1* 1 0 1 0 0 1 0 1 0 1 0 1
// 0  0 1 0 1 1 0 1 0 1 0 1 1
// 1  1 0 1 0 0 1 0 1 0 1 1 1
// 0  0 1 0 1 1 0 1 0 1 1 1 1
// 1  1 0 1 0 0 1 0 1 1 1 1 1
// 0  0 1 0 1 1 0 1 1 1 1 1 1
// 1  1 0 1 0 0 1 1 1 1 1 1 1
// 0  0 1 0 1 1 1 1  11 1  1 
// 1  1 0 1 11 11111 1
// 0  0 1 1 1 11 1 1 1 1 1 1 
// 1  1 1 1 1 1 
  // a = 0 1 1 0 1 1 0 1 1 1 1 0 1 0 1 0 1
// 1 0 1 1 1 1 0 1 0 1 0 1
// farthest 0  - segment lentgh + 1
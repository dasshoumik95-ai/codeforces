// Codeforces Problem: 2171A - Shizuku Hoshikawa and Farm Legs
// Submission ID: 365648722
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
using namespace std;
 int main()
{
    int t;
    cin >> t;
     while(t--)
    {
        int n; cin >> n ;
                cout << ((n%2==0)? (n/4 +1 ) : 0) << endl;
    }
     return 0;
}
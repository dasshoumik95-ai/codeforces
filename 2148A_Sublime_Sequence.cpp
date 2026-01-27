// Codeforces Problem: 2148A - Sublime Sequence
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    int t; cin >> t;
    while(t--){
    int x,n;
    cin >> x >> n;
    if(n%2==0)
    cout << 0 <<endl;
    else 
    cout << x << endl;
    }
}
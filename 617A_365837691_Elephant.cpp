// Codeforces Problem: 617A - Elephant
// Submission ID: 365837691
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    int n ; cin >> n ;
    if(n%5==0)
    cout << n/5 ;
        else
        cout << n/5 + 1 ;
}
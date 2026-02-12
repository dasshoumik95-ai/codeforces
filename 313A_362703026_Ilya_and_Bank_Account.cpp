// Codeforces Problem: 313A - Ilya and Bank Account
// Submission ID: 362703026
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std;
 int main()
{
    int n ;
    cin >> n ;
     if(n > 0)
        cout << n ;
     else
    {
        if(abs(n % 10) > abs((n/10) % 10) )
            cout << n / 10 ;
         else 
           // cout << n - (n%100) + (n%10);        
            cout << (n /100)*10 + (n%10);
    }
}
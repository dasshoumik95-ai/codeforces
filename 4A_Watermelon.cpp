// Codeforces Problem: 4A - Watermelon
// Language: C++17 (GCC 7-32)

#include<iostream>
using namespace std;
 int main()
{
    int w; cin>> w;
    if((w%2==0 )&&(w!=2))
    cout << "YES";
            else
    cout << "NO";
    return 0;
}
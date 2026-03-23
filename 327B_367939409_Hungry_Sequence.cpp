// Codeforces Problem: 327B - Hungry Sequence
// Submission ID: 367939409
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 void solve_brute()
{
    int n; cin >> n;
     int N = 1e7;
    vector<int> primes(N + 1, 1);
     primes[0] = primes[1] = 0;
     for(int i = 2; i * i <= N; i++)
    {
        if(primes[i])
        {
            for(int j = i * i; j <= N; j += i)
                primes[j] = 0;
        }
    }
    //O(sqrt 1e7 log (log(1e7)))
     int i = 2;
    while(n>0)
    {
        if(primes[i])
        {
            cout << i << " ";
            n-- ;
        }
        i++;
    }
}
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     solve_brute();
}
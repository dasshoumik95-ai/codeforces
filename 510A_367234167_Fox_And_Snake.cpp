// Codeforces Problem: 510A - Fox And Snake
// Submission ID: 367234167
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
using namespace std ;
 int main()
{
    int n , m ;
    cin >> n >> m ;
     for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(i%2==0)
                cout << "#" ;
             else
            {
                if(i%4 == 1&& j == m-1)
                {
                    cout << "#" ;
                    continue;
                }
                                 else if(i%4 == 3 && j == 0)
                {
                    cout << "#" ; continue;
                }
                                 else 
                    cout << "." ;
            }
         }
                    cout << '\n' ;
    }
}
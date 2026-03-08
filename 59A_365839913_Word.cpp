// Codeforces Problem: 59A - Word
// Submission ID: 365839913
// Language: C++23 (GCC 14-64, msys2)

#include<iostream>
#include<string>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string s; 
    cin >> s;
     int cnt = 0;
     for(char i : s)
    {
        if(i >= 'a' && i <= 'z')
            cnt++;
    }
     int n = s.size();
     if(cnt >= (n + 1) / 2)   // majority lowercase
    {
        for(char &i : s)
        {
            if( i <= 'Z')
                i += 'a' - 'A';
        }
    }
    else
    {
        for(char &i : s)
        {
            if(i >= 'a' )
                i -= 'a' - 'A';
        }
    }
     cout << s;
}
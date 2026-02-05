// Codeforces Problem: 58A - Chat room
// Submission ID: 361606851
// Language: C++23 (GCC 14-64, msys2)

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string s;
    cin >> s;
    int cnt=0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]=='h' && cnt==0)
            cnt=1;
        else if(s[i]=='e' && cnt==1)
            cnt=2;
        else if(s[i]=='l' && cnt==2)
            cnt=3;
        else if(s[i]=='l' && cnt==3)
            cnt=4;
        else if(s[i]=='o' && cnt==4)
            cnt=5;
    }
    if( cnt == 5)
        cout << "YES" ;
    else
        cout << "NO" ;
}
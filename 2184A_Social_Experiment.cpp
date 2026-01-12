// Codeforces Problem: 2184A - Social Experiment
// Language: C++17 (GCC 7-32)

#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t ;
    cout << endl;
        while(t--)
    {
        cin >> n;
        if(n%2==0 && n!=2)
        cout << 0 << endl;
        else if(n==2)
        cout << 2 << endl;
        else if(n==3)
        cout << 3 << endl;
        else
        cout << 1 << endl;
    } 
}
        
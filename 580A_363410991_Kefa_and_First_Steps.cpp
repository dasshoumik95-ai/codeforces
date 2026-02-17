// Codeforces Problem: 580A - Kefa and First Steps
// Submission ID: 363410991
// Language: C++23 (GCC 14-64, msys2)

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main()
{
int n ; cin >> n ;
vector<int> a(n);
for(int &i : a)
cin >> i;
 int cnt = 1;
int sgmt =1;
for(int i = 1 ; i <n ; i++)
{
 if(a[i]<a[i-1])
cnt=1;
else
cnt++ ;
sgmt = max(sgmt,cnt);
 }
cout << sgmt <<endl;
return 0;
 }
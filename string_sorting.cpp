#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    string s[1000];
    int n;
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s + n);

    for (int i = 0; i < n; i++)
    {
        cout << s[i]<<endl;
    }

    return 0;
}
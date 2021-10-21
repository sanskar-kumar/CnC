#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{

    char s[1000];
    cin.getline(s,1000);
    char *ptr = strtok(s, ",");
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, ",");
        cout << ptr << endl;
    }

    return 0;
}
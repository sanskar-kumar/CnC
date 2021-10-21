#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> target;
    sort(a, a+n);
    int l = 0, r = n - 1;
    while (l < r)
    {

        if (a[l] + a[r] == target)
        {
            cout << a[l] << " and " << a[r]<<endl;
            l++;
            r--;
        }
        else if (a[l] + a[r] > target)
        {
            r--;
        }
        else if (a[l] + a[r] < target)
        {
            l++;
        }
    }
    return 0;
}
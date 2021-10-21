#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000], n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            if (a[i + 1] > a[i - 1])
            {
                sum = sum + (a[i + 1] - a[i - 1]);
            }
            else if (a[i + 1] < a[i - 1])
            {
                sum = sum + (a[i - 1] - a[i + 1]);
            }
        }
    }
    cout << sum;
    return 0;
}
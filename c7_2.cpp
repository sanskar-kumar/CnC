#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, val = 1;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            cout << a[i][j] << " ";
            val = val + 1;
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[j][i] << ",";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << a[j][i] << ",";
            }
        }
    }
    cout<<"END";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void spiralprint(int a[][100], int m, int n)
{

    int startrow = 0;
    int startcolumn = 0;
    int endrow = m - 1;
    int endcolumn = n - 1;

    while (startrow <= endrow and startcolumn <= endcolumn)
    {
        for (int i = startcolumn; i <= endcolumn; i++)
        {
            cout << a[startrow][i] << " ";
        }
        startrow++;
        for (int i = startrow; i <= endrow; i++)
        {
            cout << a[i][endcolumn]<<" ";
        }
        endcolumn--;
        if (endrow > startrow)
        {
            for (int i = endcolumn; i >= startcolumn; i--)
            {
                cout << a[endrow][i] << " ";
            }
            endrow--;
        }

        if (startcolumn > endcolumn)
        {
            for (int i = endrow; i >= startrow; i--)
            {
                cout << a[i][startcolumn] << " ";
            }
            startcolumn++;
        }
    }
}

int main()
{

    int m, n;
    cin >> m >> n;
    int a[100][100];
    int val = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val = val + 1;
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
    spiralprint(a, m, n);

    return 0;
}
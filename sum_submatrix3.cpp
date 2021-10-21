#include <bits/stdc++.h>
using namespace std;

int sumofsubmatrix(int a[][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tl = (i + 1) * (j + 1);
            int br = (m - i) * (n - j);
            sum += a[i][j] * (tl * br);
        }
    }
    return sum;
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
            // val = val + 1;
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
    cout<< sumofsubmatrix(a, m, n);

    return 0;
}
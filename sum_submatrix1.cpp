#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n;
    int a[100][100];
    int val = 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;

    for (int lr = 0; lr < n; lr++)
    {
        for (int lc = 0; lc < n; lc++)
        {
            for (int br =lr; br < n; br++)
            {
                for (int bc =lc; bc < n; bc++)
                {
                    for (int i = lr; i <= br; i++)
                    {
                        for (int j = lc; j <= bc; j++)
                        {
                            sum += a[i][j];
                        }
                    }
                }
            }
        }
    }

    cout << sum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n;
    int a[100][100];
    int val = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[j][i] += a[j-1][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] += a[i][j-1];
        }
    }
    for (int i = 0; i < n; i++) // testoutput
    {
        for (int j = 0; j < n; j++)
        {

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
                    if (/* condition */)
                    {
                        /* code */
                    }
                    
                    sum+=((a[br][bc])-(a[lr-1][bc]+a[br][lc-1])+a[lr-1][lc-1]);
                    // cout<<sum;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}
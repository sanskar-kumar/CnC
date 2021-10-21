#include <bits/stdc++.h>
using namespace std;
void staircase(int a[][100], int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i < n)
    {

        if (a[i][j] == key)
        {
            cout << "Index is:" << i << " " << j;
            break;
        }
        else if (a[i][j] > key)
        {
            j--;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else
        {
            cout << "Element not found";
        }
    }
}
int main()
{
    int n, key;
    cin >> n;
    cin >> key;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    staircase(a, n, key);
    return 0;
}
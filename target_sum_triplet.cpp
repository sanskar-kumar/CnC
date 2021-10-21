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
    sort(a, a + n);
     
    for (int i = 0; i < n; i++)
    {
       int l = i+1, r = n - 1;
        while (l < r)
        {

            if (a[l] + a[r] + a[i]== target)
            {
                cout << a[i] <<","<< a[l] <<" and " << a[r] << endl;
                l++;
                r--;
            }
            else if (a[l] + a[r] + a[i]> target)
            {
                r--;
            }
            else if (a[l] + a[r] + a[i]< target)
            {
                l++;
            }
        }
    }

    return 0;
}
#include <iostream>
using namespace std;
//generating subarrays

int main()
{
    int a[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}
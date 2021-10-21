#include <iostream>
using namespace std;

int main()
{
    int a[1000], n;
    int key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key:-";
    cin >> key;
    int p = 0, q = n - 1;
    int cursum;
    while (p < q)
    {
        cursum = a[p] + a[q];
        if (cursum > key)
        {
            q--;
        }
        else if (cursum < key)
        {
            p++;
        }
        else if (cursum == key)
        {
            cout << a[p] << "and" << a[q] << endl;
            p++;
            q--;
        }
    }
    return 0;
}

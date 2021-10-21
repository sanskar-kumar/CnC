#include <iostream>
using namespace std;

int binary(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cin >> n;
    
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to search";
    cin >> key;

    cout << binary(a, n, key) << endl;

    return 0;
}
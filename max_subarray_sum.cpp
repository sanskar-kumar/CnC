#include <iostream>
using namespace std;
//generating subarrays

int main()
{
    int a[1000], n;
    int maxsum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            int cursum = 0;
            for (int k = i; k <= j; k++)
            {
                cursum += a[k];
            }
            if (cursum > maxsum)
            {
                maxsum = cursum;
            }
        }
    }
    cout << "Max sum is:" << maxsum;
    return 0;
}

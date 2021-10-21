#include <iostream>
using namespace std;
//generating subarrays

int main()
{
    int a[1000], n;
    int maxsum = 0;
    int cumsum[1000];
    cin >> n;
    cin >> a[0];
    cumsum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        cumsum[i]=cumsum[i-1]+a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            int cursum = 0;
            cursum=cumsum[j]-cumsum[i-1];
            
            if (cursum > maxsum)
            {
                maxsum = cursum;
            }
        }
    }
    cout << "Max sum is:" << maxsum;
    return 0;
}

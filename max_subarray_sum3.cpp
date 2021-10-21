#include <iostream>
using namespace std;

int main()
{
    int a[1000], n;
    int maxsum = 0;
    int cursum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // KADANES ALGORITHM
    for (int i = 0; i < n; i++)
    {

        cursum = cursum + a[i];
        if (cursum < 0)
        {
            cursum = 0;
        }

        maxsum = max(cursum, maxsum);
    }
    cout << "Maximum sum is" << maxsum;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int a[1000],m;
        int max=0;
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            cin>>a[j];
            if (a[j]>max)
            {
                max=a[j];
            }
            
        }
        cout<<max;
        

    }
    return 0;
    
}
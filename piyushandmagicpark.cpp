#include<bits/stdc++.h>
using namespace std;
void magical_park(char a[][100],int n , int m,int k, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]=='*')
            {
                s+=5;   
            }
            else if (a[i][j]=='.')
            {
                s=s-2;
            }
            else if (a[i][j]=='#')
            {
                break;
            }
            if (j!=m-1)
            {
                s=s-1;
            }
            
            
            
        }
        
    }

    cout<<s<<endl;

    if (s>=k)
    {
        cout<<"YES";
        
    }
    else
    {
        cout<<"NO";
    }
    



}
int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }

    magical_park(a,n,m,k,s);
    

return 0;

    
}
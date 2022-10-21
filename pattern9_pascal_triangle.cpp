/*output:
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n=5;
    // cin>>n;
    int arr[n][n+1];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            arr[i][j]=0;
        }
    }
    arr[0][1]=1;
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        //for spacing
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<n+1;j++)
        {
            //print value only when arr[i][j] not zero
            if(arr[i][j]!=0)
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
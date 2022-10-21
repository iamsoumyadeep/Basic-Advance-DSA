#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int freq[10];
    //initializing array with 0
    for(int i=0;i<10;i++)
    {
        freq[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    for(int i=0;i<10;i++)
    {
        if(freq[i]!=0)
        {
            cout<<i<<": "<<freq[i]<<"\n";
        }
    }
    return 0;
}
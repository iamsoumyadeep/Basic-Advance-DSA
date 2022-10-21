#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,j;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int amt;
	cin>>amt;
	int dp[amt+1];
	for(i=0;i<=amt;i++)
	dp[i]=0;
	dp[0]=1;
	for(i=0;i<=amt;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=arr[j])
			dp[i]+=dp[i-arr[j]];
		}
	}
	cout<<dp[amt-2]<<"\n";
}

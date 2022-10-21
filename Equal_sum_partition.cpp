#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int add=0;
	for(i=0;i<n;i++)
	add+=arr[i];
	if(add%2==1)
	{
		cout<<"Partition not possible"<<"\n";
		return 0;
	}
	int sum=add/2;
	//cin>>sum;
	int dp[n+1][sum+1];
	int j;
	for(j=0;j<=sum;j++)
	{
		dp[0][j]=0;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j>=arr[i-1])
			{
				dp[i][j]=(dp[i-1][j] || dp[i-1][j-arr[i-1]]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
	    }
	}
	if(dp[n][sum]==1)
	cout<<"Partition possible"<<"\n";
	else
	cout<<"Partition not possible"<<"\n";
}

#include<bits/stdc++.h>
using namespace std;

int result(int price[],int length[],int n,int max_len,int **dp)
{
	if(n==0 || max_len==0)
	return 0;
	
	if(length[n-1]<=max_len)
	{
		dp[n][max_len]=max(price[n-1]+result(price,length,n,max_len-length[n-1],dp),result(price,length,
		n-1,max_len,dp));
	}
	else
	{
		dp[n][max_len]=result(price,length,n-1,max_len,dp);
	}
	return dp[n][max_len];
}

int main()
{
	int n;
	cin>>n;
	int price[n],i;
	for(i=0;i<n;i++)
	cin>>price[i];
	int length[n];
	for(i=0;i<n;i++)
	{
		length[i]=i+1;
	}
	int max_len=n;
	int **dp;
	dp=new int*[n+1];
	for(i=0;i<=n;i++)
	{
		dp[i]=new int[max_len+1];
	}
	cout<<result(price,length,n,max_len,dp)<<"\n";
}

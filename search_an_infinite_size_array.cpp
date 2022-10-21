#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int low,int high,int key)
{
	if(low>high)
	return -1;
	int mid=(low+high)/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]>key)
	return binary_search(arr,low,mid-1,key);
	else
	return binary_search(arr,mid+1,high,key);
}

int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int key;
	cin>>key;
	int low=0,high=1;
	int value=arr[0];
	while(value<key)
	{
		low=high;
		high=2*high;
		value=arr[high];
	}
	cout<<binary_search(arr,low,high,key)<<"\n";
}

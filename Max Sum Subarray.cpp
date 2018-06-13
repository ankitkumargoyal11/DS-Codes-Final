/* Max Sum Subarray */
using namespace std;
#include<iostream>

int MaxSum(int *arr,int n)
{
	int flag=0;
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min<arr[i])
		min=arr[i];
		if(arr[i]>=0)
		{
			flag=0;
			break;
		}
		else
		flag=1;
	}
	
	int max_so_far=0;
	int max_ending_here=0;
	for(int i=0;i<n;i++)
	{
		max_ending_here+=arr[i];
		if(max_so_far<max_ending_here)
		max_so_far=max_ending_here;
		if(max_ending_here<0)
		max_ending_here=0;
	}
	if(flag==1)
	max_so_far=min;
	return max_so_far;
}

int main()
{
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	} 
	cout<<MaxSum(arr,n)<<endl;
}

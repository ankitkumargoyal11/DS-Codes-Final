/* Length of Longest Increasing Subsequence */
using namespace std;
#include<iostream>

int lis(int *input,int n)
{
	int *output=new int[n];
	for(int i=0;i<n;i++)
	{
		output[i]=0;
	}
	output[0]=1;
	for(int i=0;i<n;i++)
	{
		output[i]=1;
		for(int j=i-1;j>=0;j--)
		{
			if(input[j]>input[i])
			continue;
			else
			{
				int PossibleAns=output[j]+1;
				if(PossibleAns>output[i])
				output[i]=PossibleAns;
			}
			
		}
	}
	int max=output[0];
	for(int i=0;i<n;i++)
	{
		if(output[i]>max)
		max=output[i];
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	int *input=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	cout<<lis(input,n);
}

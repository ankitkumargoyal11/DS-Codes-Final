/* Min Cost Problem */
using namespace std;
#include<iostream>

int MinCost1(int **arr,int sx,int sy,int ex,int ey)
{
	if(sx==ex && sy==ey)
	return arr[ex][ey];
	
	if(sx>ex || sy>ey )
	return INT_MAX;
	
	int option1=MinCost1(arr,sx+1,sy,ex,ey);
	int option2=MinCost1(arr,sx,sy+1,ex,ey);
	int option3=MinCost1(arr,sx+1,sy+1,ex,ey);
	
	return arr[sx][sy]+min(min(option1,option2),option3);
}



int MinCost2(int **arr,int **output,int sx,int sy,int ex,int ey)
{
	if(sx==ex && sy==ey)
	return arr[ex][ey];
	
	if(sx>ex || sy>ey )
	return INT_MAX;
		
	if(output[sx][sy]!=-1)
	return output[sx][sy];
	
	int option1=MinCost2(arr,output,sx+1,sy,ex,ey);

	int option2=MinCost2(arr,output,sx,sy+1,ex,ey);
	
	int option3=MinCost2(arr,output,sx+1,sy+1,ex,ey);
	
	int ans=arr[sx][sy]+min(min(option1,option2),option3);
	output[sx][sy]=ans;

	return ans;
}


int MinCost3(int **arr,int m,int n)
{
	int dp[m][n];
	dp[m-1][n-1]=arr[m-1][n-1];
	for(int i=m-2;i>=0;i--)
	{
		dp[i][n-1]=dp[i+1][n-1]+arr[i][n-1];
	}
	for(int i=n-2;i>=0;i--)
	{
		dp[m-1][i]=dp[m-1][i+1]+arr[m-1][i];
	}
	
	for(int i=m-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			dp[i][j]=arr[i][j]+min(min(dp[i+1][j],dp[i][j+1]),dp[i+1][j+1]);
			
		}
	}
	return dp[0][0];
}



int main()
{
	int n;
	cin>>n;
	
	int **input=new int*[n];
	for(int i=0;i<n;i++)
	{
		input[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>input[i][j];
		}
	}
	cout<<"Method 1: Recursion"<<endl;
	cout<<MinCost1(input,0,0,n-1,n-1)<<endl<<endl;
	
	
	int **output=new int*[n];
	for(int i=0;i<n;i++)
	{
		output[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			output[i][j]=-1;
		}
	}
	
	cout<<"Method 2: Dynamic Programming"<<endl;
	cout<<MinCost2(input,output,0,0,n-1,n-1)<<endl<<endl;
	
	cout<<"Method 3: Iterative Approach"<<endl;
	cout<<MinCost3(input,n,n)<<endl<<endl;
	
	
}

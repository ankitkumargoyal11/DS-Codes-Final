/* Fibonacci Series*/
using namespace std;
#include<iostream>
int Fib1(int n)
{
	if(n==0 || n==1)
	return 0;
	if(n==2)
	return 1;
	
	return (Fib1(n-1)+Fib1(n-2));
}

int Fib2(int n,int *arr)
{
	
	
	if(n==0||n==1)
	return 0;
	
	if(n==2)
	return 1;
	
	if(arr[n]>0)
	return arr[n];
	
	int ans=Fib2(n-1,arr)+Fib2(n-2,arr);
	arr[n]=ans;
	return ans;
	
}

void Fib3(int n)
{
	int *arr=new int[n];
	arr[0]=0;
	arr[1]=1;
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}	 
	ans=arr[n-1];
	cout<<ans<<endl;
}


int main()
{
	int n;
	cin>>n;
	cout<<"Method 1: Recursion:"<<endl;
	cout<<Fib1(n)<<endl;
	
	
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++)
	{
		arr[i]=0;
	}
	cout<<"Method 2: DP with Recursion:"<<endl;
	cout<<Fib2(n,arr)<<endl;
	
	cout<<"Method 3: iterative approach:"<<endl;
	Fib3(n);
	cout<<endl;
}

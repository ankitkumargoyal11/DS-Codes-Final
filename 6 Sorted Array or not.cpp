//To check if a given array is sorted or not
using namespace std;
#include<iostream>
bool checksorted(int a[],int n)
{
	if(n==0 || n==1)
	return true;
	if(a[0]>=a[1])
	return checksorted(a+1,n-1);
	else 
	return false;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	bool check=checksorted(a,n);
	if(check==true)
	cout<<"Sorted Array";
	else
	cout<<"Not sorted";
}

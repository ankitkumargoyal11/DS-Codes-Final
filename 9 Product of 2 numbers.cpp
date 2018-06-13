//Product of 2 numbers
using namespace std;
#include<iostream>
int product(int m,int n)
{
	if(n==0)
	return 0;
	return m+product(m,n-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	if(m<n)
	cout<<product(n,m);
	else
	cout<<product(m,n);
}

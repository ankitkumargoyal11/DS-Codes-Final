//Sum of digits
using namespace std;
#include<iostream>
int total(int n)
{
	if(n==0)
	return 0;
	return n%10 + total(n/10);
}
int main()
{
	int n;
	cin>>n;
	int sum=total(n);
	cout<<sum<<endl;
}

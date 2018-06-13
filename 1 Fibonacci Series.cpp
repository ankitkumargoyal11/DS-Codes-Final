//Fibonacci series
using namespace std;
#include<iostream>

int fib(int k)
{
	if(k==1 || k==2)
	return k-1;
	return fib(k-1)+fib(k-2);
}

int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
}

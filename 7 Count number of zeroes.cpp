//Count no. of zeroes
using namespace std;
#include<iostream>

int countzero(int n)
{
	if(n==0)
	return 0;
	int k=n%10;
	int t=n/10;
	if(k==0)
	return 1+countzero(t);
	return countzero(t);
	
}
int main()
{
	int n;
	cin>>n;
	int count=countzero(n);
	cout<<count<<endl;
}

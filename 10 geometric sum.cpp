//Geometric Product
using namespace std;
#include<iostream>
#include<math.h>
double sumit(double n,double k)
{
	if(k==pow(0.5,n+1))
	return 0;
	return k+sumit(n,0.5*k);
}
int main()
{
	double n;
	cin>>n;
	double sum=sumit(n,1);
	cout<<sum;
}

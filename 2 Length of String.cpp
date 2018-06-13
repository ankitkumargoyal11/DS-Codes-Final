//length of string using recursion
using namespace std;
#include<iostream>
#include<string>
int count(char s[])
{
	if(s[0]=='\0')
	return 0;
	return 1+count(&s[1]);
}
int main()
{
	string s;
	cin>>s;
	cout<<count(&s[0]);
}

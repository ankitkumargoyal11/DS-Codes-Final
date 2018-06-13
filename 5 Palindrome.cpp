//Check Palindrome
using namespace std;
#include<iostream>
bool palin(char ch[],int n)
{
	if(ch[0]=='\0')
	return true;
	
	if(ch[0]!=ch[n-1])
	return false;
	if(ch[0]==ch[n-1])
	return palin(ch+1,n-2);
	
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	bool check=palin(&s[0],n);
	if(check)
	cout<<"Palindrome";
	else
	cout<<"Not palindrome";
}

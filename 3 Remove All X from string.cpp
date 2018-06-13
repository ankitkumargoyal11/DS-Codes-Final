//Remove all x from string
using namespace std;
#include<iostream>
#include<string>

void remove(char ch[])
{
	if(ch[0]=='\0')
	return;
	if(ch[0]!='x')
	remove(ch+1);
	else
	{
		int i=0;
		while(ch[i]!='\0')
		{
			ch[i]=ch[i+1];
			i++;
		}
		ch[i]=ch[i+1];
		remove(ch);
	}
}
int main()
{
	string s;
	cin>>s;
	remove(&s[0]);
	cout<<s;
}

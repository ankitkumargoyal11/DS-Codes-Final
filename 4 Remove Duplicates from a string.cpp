// Remove consecutive duplicates from string
using namespace std;
#include<iostream>

void removeDup(char ch[])
{
	if(ch[0]=='\0' || ch[1]=='\0')
	return;
	if(ch[0]==ch[1])
	{
		int i;
		for(i=1;ch[i]!='\0';i++)
		{
			ch[i]=ch[i+1];
		}
		ch[i]='\0';
		removeDup(ch);
	}
	else
	removeDup(ch+1);
}
int main()
{
	string s;
	cin>>s;
	removeDup(&s[0]);
	cout<<s;
}

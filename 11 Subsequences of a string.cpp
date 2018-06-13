//Subsequences of a string
using namespace std;
#include<iostream>

int subse(string s,string output[])
{
	if(s.empty())
	{
		output[0]=" ";
		return 1;
	}
	string smallString=s.substr(1);
	int smallOutput=subse(smallString,output);
	for(int i=0;i<smallOutput;i++)
	{
		output[i+smallOutput]=s[0]+output[i];
	}
	return 2*smallOutput;
}

int main()
{
	string s;
	cin>>s;
	string *output=new string[1000];
	int total=subse(s,output);
	for(int i=0;i<total;i++)
	{
		cout<<output[i]<<endl;
	}
}

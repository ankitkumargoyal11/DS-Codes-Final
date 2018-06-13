/*Rat in a Maze*/

using namespace std;
#include<iostream>


bool hasPathHelper(int** arr,int n,int** solution,int x,int y)
{
	if(x==n-1 && y==n-1)
	return true;
	if(x<0 || y<0 || x>=n || y>=n || arr[x][y]==0 || solution[x][y]==1)
	return false;
	
	solution[x][y]=1;
	if(hasPathHelper(arr,n,solution,x-1,y))
	return true;
	if(hasPathHelper(arr,n,solution,x+1,y))
	return true;
	if(hasPathHelper(arr,n,solution,x,y-1))
	return true;
	if(hasPathHelper(arr,n,solution,x,y+1))
	return true;
	
	solution[x][y]=0;
	return false;
}

bool haspath(int **arr,int n)
{
	int** solution=new int*[n];
	for(int i=0;i<n;i++)
	{
		solution[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			solution[i][j]=0;
		}
	}
	return hasPathHelper(arr,n,solution,0,0);
}



int main()
{
	int** arr;
	int n;
	cin>>n;
	arr=new int* [n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<haspath(arr,n)<<endl;
	cout<<"done";
}


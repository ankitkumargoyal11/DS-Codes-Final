/*Printing all paths in Rat Maze problem*/
/*Rat in a Maze*/

using namespace std;
#include<iostream>

bool PrintPathHelper(int** arr,int n,int** solution,int x,int y)
{
	if(x==n-1 && y==n-1)
	{
		solution[x][y]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<solution[i][j]<<"  ";
			}
			cout<<endl;
		}
		return true;
	}
	if(x<0 || y<0 || x>=n || y>=n || solution[x][y]==1 || arr[x][y]==0)
	{
		return false;
	}
	solution[x][y]=1;
	PrintPathHelper(arr,n,solution,x-1,y);
	PrintPathHelper(arr,n,solution,x,y-1);
	PrintPathHelper(arr,n,solution,x+1,y);
	PrintPathHelper(arr,n,solution,x,y+1);
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
	return PrintPathHelper(arr,n,solution,0,0);
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
	cout<<endl<<haspath(arr,n)<<endl;
	cout<<"done";
}


#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4],int target,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==target)
				return true;
		}
	}
	return false;
}

void rowSum(int arr[][4],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
			sum+=arr[i][j];

		cout<<sum<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[3][4];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}

	//print
	// for(int i=0;i<3;i++)
	// {
	// 	for(int j=0;j<4;j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// int target;
	// cin>>target;

	// if(isPresent(arr,target,3,4))
	// 	cout<<"present";
	// else
	// 	cout<<"not present";


	rowSum(arr,3,4);
}
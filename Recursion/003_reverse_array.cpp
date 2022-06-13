#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}


void reverse_arr(int arr[],int i,int j)
{
	if(i>j)
		return;
	swap(arr[i],arr[j]);
	reverse_arr(arr,i+1,j-1);
}

int main()
{
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	reverse_arr(arr,0,n-1);
	print_arr(arr,n);
}
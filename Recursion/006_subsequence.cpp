#include<bits/stdc++.h>

using namespace std;

void sub_sequence(vector<int> &arr,vector<int> &v,int i,int n)
{
	if(i==n)
	{
		for(auto it:v)
		{
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}

	v.push_back(arr[i]);
	sub_sequence(arr,v,i+1,n);
	v.pop_back();
	sub_sequence(arr,v,i+1,n);
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	vector<int> v;

	sub_sequence(arr,v,0,n);
}
#include <bits/stdc++.h>
using namespace std;

bool print_any(vector<int> &arr,vector<int> &v,int i,int n,int s,int sum)
{
	if(i==n)
	{
		if(s==sum)
		{
			for(auto it:v)
				cout<<it<<" ";
			cout<<endl;
			return true;
		}
		return false;
	}

	v.push_back(arr[i]);
	s+=arr[i];

	if(print_any(arr,v,i+1,n,s,sum))
		return true;

	v.pop_back();
	s-=arr[i];

	if(print_any(arr,v,i+1,n,s,sum))
		return true;

	return false;
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>> arr[i]; 

	int sum;
	cin>> sum;

	vector<int> v;

	bool x=print_any(arr,v,0,n,0,sum);
}
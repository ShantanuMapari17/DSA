//count the number of subsequences with given sum
#include <bits/stdc++.h>
using namespace std;

int count_sub(vector<int> &arr,vector<int> &v,int i,int n,int s,int sum)
{
	if(i==n)
	{
		if(s==sum)
		{
			return 1;
		}
		return 0;
	}

	v.push_back(arr[i]);
	s+=arr[i];

	int l=count_sub(arr,v,i+1,n,s,sum);

	v.pop_back();
	s-=arr[i];

	int r=count_sub(arr,v,i+1,n,s,sum);

	return l+r;
}

int main()
{
	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int sum;
	cin>>sum;

	vector<int> v;

	int count=count_sub(arr,v,0,n,0,sum);
	cout<<count<<endl;
}
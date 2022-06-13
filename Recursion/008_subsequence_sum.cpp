#include <bits/stdc++.h>
using namespace std;

void subsquence_sum(int arr[],vector<int> &v,int i,int n,int s,int sum)
{
	if(i==n)
	{
		if(s==sum)
		{
			for(auto it:v)
				cout<<it<<" ";
			cout<<endl;
		}
		return;
	}

	v.push_back(arr[i]);
	s+=arr[i];

	subsquence_sum(arr,v,i+1,n,s,sum);

	s-=arr[i];
	v.pop_back();

	subsquence_sum(arr,v,i+1,n,s,sum);
}


int main()
{
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> v;
	subsquence_sum(arr,v,0,n,0,sum);
}
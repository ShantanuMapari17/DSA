#include<bits/stdc++.h>
using namespace std;



int b_search(vector<int> &v,int ele)
{
	int n=v.size();
	int start=0;
	int end=n-1;

	while(start<=end)
	{
		int mid=start + (end-start)/2;
		if(ele==v[mid])
			return mid;
		else if(ele < v[mid])
			end=mid-1;
		else
			start=mid+1;
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];

	int key;
	cin>>key;

	cout<<"ele found at index :" <<b_search(v,key)<<endl;

}
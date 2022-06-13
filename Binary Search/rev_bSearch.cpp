#include<bits/stdc++.h>
using namespace std;

int rev_b_search(vector<int> &v,int key)
{
	int n=v.size();
	int start=0;
	int end=n-1;

	while(start<=end)
	{
		int mid=start + (end-start)/2;
		if(key==v[mid])
			return mid;
		else if(key<v[mid])
			start=mid+1;
		else
			end=mid-1;
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

	cout<<"ele found at index :" <<rev_b_search(v,key)<<endl;

}
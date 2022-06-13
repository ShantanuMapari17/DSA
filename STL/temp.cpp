#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) 
{
	int n=nums.size();
	vector<int> v=nums;
	stack<int> st;
	vector<int> 
	for(int i=0;i<n;i++)
		v.push_back(nums[i]);
	        
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];

	vector<int> nge=NGE(v);

	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<"   "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
	}
}
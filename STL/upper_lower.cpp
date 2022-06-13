#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end());

	auto it=upper_bound(v.begin(),v.end(),33);
	auto it2=lower_bound(v.begin(),v.end(),45);
	cout<<*it<<" "<<*it2<<endl;
}
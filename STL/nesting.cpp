#include <bits/stdc++.h>
using namespace std;

void printV(vector<pair<int,int>> &v)
{
	cout<<"Size of the vector is: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

int main(){
	vector<pair<int,int>> v={{1,2}, {3,4}, {5,6}};
	printV(v);
	vector<pair<int,int>> v2=v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v2.push_back({x,y});
	}
	printV(v2);
}
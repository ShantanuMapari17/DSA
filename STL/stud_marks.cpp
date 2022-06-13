#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int, multiset<string>> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int marks;
		string name;
		cin>>name >> marks;
		m[marks].insert(name);
	}

	auto it=--m.end();
	while(1){
		for(auto &name:it->second){
			cout<<name <<" "<< it->first<<endl;
		}
		if(it==m.begin()) break;
		it--;
	}

}
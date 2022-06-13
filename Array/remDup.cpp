#include <algorithm>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void remDup(vector<int> &v)
{
	int j=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]!=v[j-1])
		{
			v[j]=v[i];
			j++;
		}
	}
}
int main() {
	// Your code goes here;
	vector<int> v={1,2,2,3,4,4,5,5,5,5,5};
	remDup(v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
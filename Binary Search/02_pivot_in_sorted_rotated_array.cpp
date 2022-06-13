#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> &v)
{
	int s=0,e=v.size()-1;

	while(s<e)
	{
		int mid= s + (e-s)/2;
		if(v[mid]>=v[0])
		{
			s=mid+1;
		}
		else
			e=mid;
	}
	return s;
}


int main()
{
	vector<int> v={7,9,11,1,2,5};
	cout<<"pivot in  the array is at: "<<pivot(v)<<endl;
}
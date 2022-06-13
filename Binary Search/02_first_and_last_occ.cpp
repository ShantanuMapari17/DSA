#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &v,int key){
	int s=0,e=v.size()-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(v[mid]==key){
			ans=mid;
			e=mid-1;
		}

		else if(key>v[mid]){
			s=mid+1;
		}
		else
			e=mid-1;
		mid=s+(e-s)/2;
	}
	return ans;
}


int LastOcc(vector<int> &v,int key){
	int s=0,e=v.size()-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(v[mid]==key){
			ans=mid;
			s=mid+1;
		}

		else if(key>v[mid]){
			s=mid+1;
		}
		else
			e=mid-1;
		mid=s+(e-s)/2;
	}
	return ans;
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
	cout<<"First occ of "<<key<<" is : "<<firstOcc(v,key)<<endl;
	cout<<"Last occ of "<<key<<" is : "<<LastOcc(v,key)<<endl;
	return 0;
}
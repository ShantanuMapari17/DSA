#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str[10];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		// cout<<"ENter the string: ";
		getline(cin,str[i]);
	}

	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
}
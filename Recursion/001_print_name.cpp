#include<bits/stdc++.h>
using namespace std;

void print_name(int n)
{
	if(n<1)
		return;

	cout<<"Shantanu"<<endl;
	print_name(n-1);
}

void print_1_to_n(int i,int n)
{
	if(i>n)
		return;

	cout<<i<<endl;
	print_1_to_n(i+1,n);
}


int main()
{
	int n;
	cin>>n;

	// print_name(n);
	print_1_to_n(1,n);
}
#include <bits/stdc++.h>
using namespace std;

void sub_string(string &name,string &str,int i,int n)
{
	if(i==n)
	{
		cout<<str<<" ";
		cout<<endl;
		return;
	}

	str.push_back(name[i]);

	sub_string(name,str,i+1,n);

	str.pop_back();

	sub_string(name,str,i+1,n);

}

void print_sub(string &name)
{
	int n=name.size();
	string str="";
	sub_string(name,str,0,n);
}

int main()
{
	string name;
	cin>> name;
	print_sub(name);
}
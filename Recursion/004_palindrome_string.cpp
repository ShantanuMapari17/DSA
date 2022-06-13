//check if given string is palindrome or not

#include<bits/stdc++.h>

using namespace std;

bool isPal(string &s,int i,int n)
{
	if(i>=n/2)	return true;

	if(s[i]!=s[n-i-1])
		return false;

	return isPal(s,i+1,n);
}


int main()
{
	string s;
	cin>> s;
	int n=s.size();
	cout<<isPal(s,0,n);
}
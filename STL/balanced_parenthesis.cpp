#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m={{'(',-3},{'[',-2},{'{',-1},{')',3},{']',2},{'}',1}};
string isBal(string s)
{
	stack<char> st;
	for(char ch:s)
	{
		
		if(m[ch]<0)	st.push(ch);
		else
		{
			if(st.empty())	return "NO";
			if(m[st.top()]+m[ch]!=0) return "NO";
			st.pop();

		}
	}
	return "Yes";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<isBal(s)<<endl;
	}
}
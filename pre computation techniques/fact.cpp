#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
const int N=1e5+10;
long long int fact[N];
int main()
{
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++)
	{
		fact[i]=(i*fact[i-1])%M;
	}
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<"fact of n is"<<fact[n]<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int trailZero(int n)
{
  int res=0;
  for(int i=5;i<=n;i=i*5)
  {
    res+=n/i;
  }
  return res;
}

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<"Trailing zeros in "<<n<<"! is "<<trailZero(n)<<endl;
}

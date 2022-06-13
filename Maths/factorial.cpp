#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
  if(n==0)  return 1;
  return n*fact(n-1);
}

int trailZero(int n)
{
  int res=0;
  for(int i=5;i<n;i=i*5)
  {
    res=res+n/i;
  }
  return res;
}
int main()
{
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  cout<<"factorial of n is: "<<fact(n)<<endl;
  cout<<"Trailing zeroes are: "<<trailZero(n)<<endl;
}

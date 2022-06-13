#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
  int i;
  for(int i=1;i*i<n;i++)
  {
    if(n%i==0)
      cout<<i<<" ";
  }

  for(;i>=1;i--)
  {
    if(n%i==0)
      cout<<n/i<<" ";
  }
}

int main()
{
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  cout<<"Divisors of n: "<<endl;
  printDivisors(n);
}

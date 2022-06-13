#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n)
{
  if(n<=1)  return;

  for(int i=2;i*i<=n;i++)
  {
    while(n%i==0)
    {
      cout<<i<<" ";
      n=n/i;
    }
  }
  if(n>1) cout<<n<<" ";
}

void printPrimeFactors2(int n)
{
  if(n<=1) return;

  while(n%2==0)
  {
    cout<<2<<" ";
    n/=2;
  }

  while(n%3==0)
  {
    cout<<3<<" ";
    n/=3;
  }

  for(int i=5;i*i<=n;i++)
  {
    while(n%i==0)
    {
      co
    }
  }
}

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<"Prime factors of number are: ";
  printPrimeFactors(n);
}

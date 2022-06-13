#include<bits/stdc++.h>
using namespace std;

int countDig1(long n)
{
  int res=0;
  while(n)
  {
    res++;
    n=n/10;
  }
  return res;
}

int countDig2(long n)
{
  return floor(log10(n)+1);
}

int main()
{
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  cout<<"\nNumber of digits is: "<<countDig2(n)<<endl;
  return 0;
}

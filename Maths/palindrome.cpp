#include<bits/stdc++.h>
using namespace std;

bool isPal(long n)
{
  int rev=0;
  int temp=n;
  while(temp)
  {
    int x=temp%10;
    rev=rev*10+x;
    temp=temp/10;
  }
  return (rev==n);
}

int main()
{
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  if(isPal(n))
  {
    cout<<"yes"<<endl;
  }
  else cout<<"no";
  return 0;
}

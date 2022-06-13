#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int lcm(int a,int b)
{
  return (a*b)/gcd(a,b);
}

int main()
{
  cout<<"Enter two numbers: ";
  int a,b;
  cin>>a>>b;
  cout<<"GCD of two numbers is : "<<gcd(a,b)<<endl;
  cout<<"LCM of two numbers is : "<<lcm(a,b)<<endl;
}

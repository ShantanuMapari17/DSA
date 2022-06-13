#include<bits/stdc++.h>
using namespace std;

int main()
{
  pair<int,string> p;
  // p=make_pair(2,"abc");
  p={2,"abc"};
  pair<int,string> &p1=p;
  cout<<p.first<<" "<<p.second<<endl;
  cout<<p1.first<<end;
}

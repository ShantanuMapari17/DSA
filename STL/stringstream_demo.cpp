#include<bits/stdc++.h>
using namespace std;

int count_words(const string str)
{
  stringstream ss(str);
  string word;
  int count=0;
  while(ss>>word)
  {
    cout<<word<<endl;
    count++;
  }
  return count;
}
int main()
{
  string s = "geeks for geeks geeks contribution placements";
  cout << " Number of words are: " << count_words(s);
  return 0;
}

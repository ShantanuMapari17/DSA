#include<bits/stdc++.h>

using namespace std;
void printFrequencies(const string &str)
{
  unordered_map<string,int> wordFreq;

  stringstream ss(str);
  string word;

  while(ss>>word)
    wordFreq[word]++;

  for(auto it=wordFreq.begin();it!=wordFreq.end();it++)
  {
    cout<<it->first<<"--->"<<it->second<<endl;
  }

}

int main()
{
    string str = "geeks for geeks geeks quiz ";
    printFrequencies(str);
    return 0;
}

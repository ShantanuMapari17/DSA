#include<bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map <string,int> umap;

  umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    for(auto it=umap.begin();it!=umap.end();it++)
    {
      cout<<it->first<<" -> "<<it->second<<endl;
    }

    return 0;
}

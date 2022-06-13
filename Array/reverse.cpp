#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v)
{
    int l=0;
    int h=v.size()-1;
    while(l<h)
    {
        swap(v[l],v[h]);
        l++;
        h--;
    }

}

int main()
{
    vector<int> v={1,2,3,4,5};
    reverse(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
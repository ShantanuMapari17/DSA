#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={14, 12, 70, 15, 95, 65, 22, 30};
    int n=8;
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    int smin=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smin && arr[i]>min)
            smin=arr[i];
    }

    cout<<max-smin<<endl;

}
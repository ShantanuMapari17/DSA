#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="i.like.this.program.very.much";
    int i=0;
    bool temp=false;
    while(str[i++]!='\0')
    {
        
        if(str[i]=='.' && temp)
        {
            cout<<".xyz";
            while(str[i++]!='.');
            temp=false;
        }
        else
        {
            if(str[i]=='.' )    temp=true;
            cout<<str[i];
        }
        
        
    }
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";
    string str="raja1123labs";
    int temp[11];
    for(int i=0;i<11;i++)
        temp[i]=0;
    int i=0;
    while(str[i++]!='\0')
    {
        if(str[i]=='0') temp[0]++;
        else if(str[i]=='1') temp[1]++;
        else if(str[i]=='2') temp[2]++;
        else if(str[i]=='3') temp[3]++;
        else if(str[i]=='4') temp[4]++;
        else if(str[i]=='5') temp[5]++;
        else if(str[i]=='6') temp[6]++;
        else if(str[i]=='7') temp[7]++;
        else if(str[i]=='8') temp[8]++;
        else if(str[i]=='9') temp[9]++;
        else temp[10]++;


    }

    for(i=0;i<10;i++)
    {
        if(temp[i]!=0)
        {
            cout<<"'"<<i<<"'"<< "="<<temp[i]<<" ";
        }
    }
    cout<<"others="<<temp[10];

    return 0;
}

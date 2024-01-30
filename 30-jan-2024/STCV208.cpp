//
//  STCV208.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 30/01/24.
//
//           __
//         >(__)
//          (oo)
//   /-------\/
//  / |     ||
// *  ||----||
//    ^^    ^^
//   MAGIC DESISION
//   MAKING COW.

#include "STCV208.hpp"


Strsad::Strsad()
{
    
}


void Strsad::find_sh(string S)
{
    
    int length=0;
    int flag = 0;
    
    for(int i=0;i<S.length();i++)
    {
        if(length>2)
        {
            flag = 1;
            break;
        }
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
            length++;
        else
            length = 0;
    }
    if(flag)
        cout<<"Happy"<<"\n";
    else
        cout<<"Sad"<<"\n";
}

int main()
{
    Strsad obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        string S;
        cin >> S;
        obj.find_sh(S);
    }
}

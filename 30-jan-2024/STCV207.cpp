//
//  STCV207.cpp
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

#include "STCV207.hpp"

Strbar::Strbar()
{
    
}

void Strbar::find_bar(string S, string T)
{
    
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==T[i])
            cout<<'G';
        else
            cout<<'B';
    }
    cout<<"\n";
}

int main()
{
    Strbar obj;
    int t;
    cin >> t;
    while(t--)
    {
        string S,T;
        cin>>S>>T;
        obj.find_bar(S, T);
    }
    
}

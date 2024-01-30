//
//  STCV206.cpp
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

#include "STCV206.hpp"

Strbin::Strbin()
{
    
}

void Strbin::find_rep(string S)
{
    int mcount = 0;
    
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==S[i+1])
            mcount++;
    }
    
    cout<<mcount<<"\n";
}

int main()
{
    Strbin obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        string S;
        cin >>S;
        obj.find_rep(S);
    }
}

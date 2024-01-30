//
//  STCV202.cpp
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

#include "STCV202.hpp"

str_replica::str_replica()
{
    
}

void str_replica::find_replica(string A)
{
    cout<<A<<"\n";
    for(int i=A.length()-1;i>=0;i--)
    {
        cout<<A[i];
    }
    cout<<"\n";
}

int main()
{
    str_replica obj;
    int t;
    cin>>t;
    while(t--)
    {
        string S,A,B;
        cin>>S;
        obj.find_replica(S);
    }
    
}

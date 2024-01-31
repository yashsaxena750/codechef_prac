//
//  STCV210.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 31/01/24.
//
//              ((----))
//              ((oooo))
//       ///-----\\\///
//     ///|||    |||
//   *** ||||||---|||
//       ^^^^^^    ^^^
// where milkshakes come from

#include "STCV210.hpp"

Strslice::Strslice(){
    
}

void Strslice::find_eq(string S)
{
    
    if(S.substr(0,S.length()/2-1)==S.substr(S.length()/2,S.length()-1))
    {
        cout<<"YES"<<"\n";
    }
    else
        cout<<"NO"<<"\n";
}

int main()
{
    Strslice obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        obj.find_eq(S);
    }
    
    return 0;
}

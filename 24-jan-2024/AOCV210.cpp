//
//  AOCV210.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 24/01/24.
//
//           /\
//          {__}
//          (oo)
//   /-------\/
//  / |  +  ||
// *  ||----||
//    ^^    ^^
//   Sacred Cow

#include "AOCV210.hpp"

Leave::Leave()
{
    
}


void Leave::find_leave(vector<int>A, int N)
{
    int Fs = 8+N;
    vector<int> lday = {6,13,20,27,7,14,21,28};
    for(int i=0;i<N;i++)
    {
        
        lday.push_back(A[i]);
    }
    
    vector<int>::iterator ip;
    std::sort(lday.begin(), lday.end());
    
    ip = std::unique(lday.begin(), lday.begin() + Fs);
    lday.resize(std::distance(lday.begin(), ip));
    cout<<lday.size()<<"\n";
    
}

int main()
{
    Leave obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        int el;
        cin >> N;
        vector<int> A;
        for(int i=0; i < N; i++)
        {
            cin >> el;
            A.push_back(el);
        }
        
        obj.find_leave(A, N);
    }
}

//
//  LBCV201A.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 17/01/24.
//

#include "LBCV201A.hpp"

LBC::LBC(){
}


void LBC::find_int(int x, int y)
{
    
    if((x+y)%2==0)
        cout<<(x+y)/2<<"\n";
    else
        cout<<-1<<"\n";
}


int main()
{
    
    int x,y,t;
    cin>>t;
    
    while(t--)
    {
        cin>>x>>y;
        LBC lbc;
        lbc.find_int(x, y);
    }
    
    return 0;
    
    
    
}

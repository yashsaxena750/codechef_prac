//
//  LBCV202.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 18/01/24.
//

#include "LBCV202.hpp"

anon::anon()
{
    
}

void anon::find_div(int x, int y, int z)
{
    
    if(z%x==0 && z%y==0)
        cout<<"ANY"<<"\n";
    else if (z%x==0 && z%y!=0)
        cout<<"CHICKEN"<<"\n";
    else
        cout<<"NONE"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    int x,y,z;
    while(t--)
    {
        cin>>x>>y>>z;
        anon obj;
        obj.find_div(x, y, z);
    }
    
    return 0;
}

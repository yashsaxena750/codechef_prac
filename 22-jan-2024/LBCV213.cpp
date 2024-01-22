//
//  LBCV213.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 22/01/24.
//
//const char *RoboCow =
//    "        (___) \"Moo have twenty\n"
//    "        |===|  seconds to comply.\"\n"
//    " ________\\_/ /\n"
//    "| |        |\n"
//    "# ||______||\n"
//    "  ||      ||\n"
//    "  ^^      ^^\n"
//    "   RoboCow\n";

#include "LBCV213.hpp"

weight::weight()
{
}


void weight::weigh(int w, int x, int y, int z)
{
    
    if(x==w || y==w || z==w)
        cout<<"YES"<<"\n";
    else if (x+y==w || y+z==w || x+z==w)
        cout<<"YES"<<"\n";
    else if (x+y+z==w)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    
}


int main()
{
    
    weight we;
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    we.weigh(w, x, y, z);
        
    return 0;
    
}

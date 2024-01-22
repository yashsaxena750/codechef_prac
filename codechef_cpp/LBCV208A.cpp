//
//  LBCV208A.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 22/01/24.
//
/*
 
    "        (___) \"Moo have twenty\n"
    "        |===|  seconds to comply.\"\n"
    " ________\\_/ /\n"
    "| |        |\n"
    "# ||______||\n"
    "  ||      ||\n"
    "  ^^      ^^\n"
    "   RoboCow\n";

 
 */

#include "LBCV208A.hpp"

Shoes::Shoes()
{
    
}

void Shoes::shoes_pair(int x, int y)
{
    
    if(x>y)
        cout<<x+abs(x-y)<<"\n";
    else
        cout<<(x)<<"\n";
}


int main()
{
    
    Shoes sh;
    int t;
    cin>>t;
    
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        sh.shoes_pair(x, y);
    }
    return 0;
    
}

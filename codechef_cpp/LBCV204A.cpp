//
//  LBCV204A.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 18/01/24.
//

#include "LBCV204A.hpp"

Mtime::Mtime(){
    
}

void Mtime::find_time(int X, int Y)
{
const char *COW_comitant =
    "         (__)       (__)       (__)      (__)\n"
    "         (oo)       (oo)       (oo)      (oo)\n"
    "  /-------\\/ /-------\\/ /-------\\//-------\\/\n"
    " / |     || / |     || /|     || /|     ||\n"
    "*  ||----||*  ||----||* ||----||* ||----||\n"
    "   ^^    ^^   ^^    ^^  ^^    ^^  ^^    ^^\n"
    "              COW-comitant\n";
    
    cout<<COW_comitant<<"\n";
    cout<<abs(X-Y)+Y/2<<"\n";
    
}


int main()
{
    Mtime mtime;
    
    int X,Y;
    cin>>X>>Y;
    mtime.find_time(X, Y);
    
    return 0;
    
}

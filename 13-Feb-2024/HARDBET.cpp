//
// Created by yashs on 13-02-2024.
//

#include "HARDBET.h"

void HardBet::find_diff(int a, int b, int c) {

    int min = std::min(std::min(a,b),c);
    if(min==a)
        std::cout<<"Draw"<<"\n";
    else if(min==b)
        std::cout<<"Bob"<<"\n";
    else if(min==c)
        std::cout<<"Alice"<<"\n";

}

int main()
{

    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        std::cin>>a>>b>>c;
        HardBet::find_diff(a,b,c);
    }
}
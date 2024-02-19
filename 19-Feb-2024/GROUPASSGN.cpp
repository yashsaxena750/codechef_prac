//
// Created by yashs on 19-02-2024.
//

#include "GROUPASSGN.h"

void Group::find_roll(int a, int b)
{

    std::cout<<(a*2-b)+1<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int a = 0;
        int b = 0;
        std::cin>>a>>b;
        Group::find_roll(a,b);
    }
}
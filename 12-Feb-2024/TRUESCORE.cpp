//
// Created by yashs on 12-02-2024.
//

#include "TRUESCORE.h"

void Score::find_sc(const std::vector<int>*a) {

    if( (a->at(0)<=a->at(2)) && (a->at(1)<=a->at(3)) )
        std::cout<<"POSSIBLE"<<"\n";
    else
        std::cout<<"IMPOSSIBLE"<<"\n";

}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::vector<int>a(4);
        for(int i=0;i<4;i++)
        {
            std::cin>>a[i];
        }

        Score::find_sc(&a);
    }
}
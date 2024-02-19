//
// Created by yashs on 16-02-2024.
//

#include "LOOP.h"

void Loop::find_way(int a ,int b, int c){


    std::cout<<std::min( abs(a-b),c - abs(b-a) )<<"\n";

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

        Loop::find_way(a,b,c);
    }
}
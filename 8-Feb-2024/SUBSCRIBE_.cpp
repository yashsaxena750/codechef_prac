//
// Created by yashs on 08-02-2024.
//

#include "SUBSCRIBE_.h"

void Subscribe::find_sub(int a, int b) {

    if(a>1)
    {
        for(int i=1;i<a;i++)
        {
            if(i*6>=a)
            {
                std::cout<<i*b<<"\n";
                break;
            }
        }
    }
    else
        std::cout<<a*b<<"\n";
}

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {
        int a = 0;
        int b = 0;
        std::cin>>a>>b;

        Subscribe::find_sub(a,b);
    }
}
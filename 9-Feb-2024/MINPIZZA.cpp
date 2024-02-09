//
// Created by yashs on 09-02-2024.
//

#include "MINPIZZA.h"

void Pizza::find_pcount(float a, float b) {

    std::cout<<ceil((a*b)/4)<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        float a = 0;
        float b = 0;
        std::cin>>a>>b;

        Pizza::find_pcount(a,b);
    }
}
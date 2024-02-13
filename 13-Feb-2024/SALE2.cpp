//
// Created by yashs on 14-02-2024.
//

#include "SALE2.h"

void Sale::find_free(int a, int b) {

    int diff = a/3;

    std::cout<<(a-diff)*b<<"\n";

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
        Sale::find_free(a,b);
    }
}
//
// Created by yashs on 09-02-2024.
//

#include "CREDCOINS.h"


void Cred::find_bag(int a, int b) {

    std::cout<<(a*b)/100<<"\n";

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

        Cred::find_bag(a,b);
    }
}
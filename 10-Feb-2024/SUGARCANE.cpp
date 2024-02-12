//
// Created by yashs on 10-02-2024.
//

#include "SUGARCANE.h"

void sugarCane::find_profit(int gsold) {

    int x=50-(50*0.70);
    std::cout<<x*gsold<<std::endl;

}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int glass_sold = 0;
        std::cin>>glass_sold;

        sugarCane::find_profit(glass_sold);
    }
}
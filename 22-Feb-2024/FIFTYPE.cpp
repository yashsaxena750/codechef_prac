//
// Created by yashs on 22-02-2024.
//

#include "FIFTYPE.h"

void Battery::find_mint(int bp) {

    int mc = 0;

    while (bp != 50) {
        if (bp < 50) {
            bp += 2;
        }
        else if (bp > 50) {
            bp -= 3;
        }
        mc++;
    }

    std::cout<<mc<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int bp = 0;
        std::cin>>bp;
        Battery::find_mint(bp);
    }
}
//
// Created by yashs on 10-02-2024.
//

#include "CHEFGAMES.h"

void Refree::find_ball(const std::vector<int> *a) {

    int flag = 0;

    for( auto const el: *a)
    {
        if(el==1)
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        std::cout << "OUT" << "\n";
    else
        std::cout<<"IN"<<"\n";

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

        Refree::find_ball(&a);
    }

    return 0;
}
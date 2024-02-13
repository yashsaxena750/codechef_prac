//
// Created by yashs on 13-02-2024.
//

#include "SST.h"

void SST::find_inv(int a, int b) {


    if(a*10>b*10/2)
        std::cout<<"FIRST"<<std::endl;

    else if(a*10<b*10/2)

        std::cout<<"SECOND"<<std::endl;
    else
        std::cout<<"ANY"<<std::endl;

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

        SST::find_inv(a,b);
    }
}
//
// Created by yashs on 12-02-2024.
//

#include "TRAVELFAST.h"


void Travel::find_mode(int b, int c) {

    if(b<c)
        std::cout<<"Bike"<<"\n";
    else if(b>c)
        std::cout<<"Car"<<"\n";
    else
        std::cout<<"Same"<<"\n";
}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int b = 0;
        int c = 0;
        std::cin>>b>>c;

        Travel::find_mode(b,c);
    }
}
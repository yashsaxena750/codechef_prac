//
// Created by yashs on 13-02-2024.
//

#include "ACTEMP.h"

void Temp::find_temp(int a, int b, int c) {

    if( a<=b && b>=c )
        std::cout<<"Yes"<<"\n";
    else
        std::cout<<"No"<<"\n";

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

        Temp::find_temp(a,b,c);
    }
}
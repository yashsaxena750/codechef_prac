//
// Created by yashs on 16-02-2024.
//

#include "INCREAR.h"

void Incre::find_min(int a, int b) {

    int opc = 0;

    while(a!=b)
    {
        if(a>b)
        {
            b += 2;
            opc++;
        }
        else
        {
            a += 1;
            opc++;
        }
    }

    std::cout<<opc<<"\n";

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
        Incre::find_min(a,b);
    }
}
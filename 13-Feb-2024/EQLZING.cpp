//
// Created by yashs on 14-02-2024.
//

#include "EQLZING.h"

void eqNum::findposs(int a, int b) {

    if(  (a==b) || (a%2==0 && b%2==0)  )
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
        std::cin>>a>>b;
        eqNum::findposs(a,b);
    }
}
//
// Created by yashs on 09-02-2024.
//

#include "WATERFILLING.h"

void waterFill::find_time(int a, int b, int c) {

    if(  ((a==0) && (b==0)) || ((b==0) && (c==0)) || ((a==0) && (c==0)) )
        std::cout<<"Water filling time"<<"\n";
    else
        std::cout<<"Not now"<<"\n";
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

        waterFill::find_time(a,b,c);
    }
}

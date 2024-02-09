//
// Created by yashs on 09-02-2024.
//

#include "OFFICE.h"

void officeTime::find_ttime(int h, int f) {

    std::cout<<h*4+f<<"\n";

}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int h = 0;
        int f = 0;
        std::cin>>h>>f;

        officeTime::find_ttime(h,f);
    }
}
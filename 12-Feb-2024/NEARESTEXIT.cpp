//
// Created by yashs on 13-02-2024.
//

#include "NEARESTEXIT.h"

void Seat::find_exit(int a) {

    if(a<=50)
        std::cout<<"LEFT"<<"\n";
    else
        std::cout<<"RIGHT"<<"\n";


}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int a = 0;
        std::cin>>a;
        Seat::find_exit(a);
    }

    return 0;
}
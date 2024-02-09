//
// Created by yashs on 09-02-2024.
//

#include "JASSIGNMENTS.h"

void Assignment::find_comp(int time) {

    if(time+3<=10)
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
        int time = 0;
        std::cin>>time;

        Assignment::find_comp(time);
    }
}
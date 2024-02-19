//
// Created by yashs on 19-02-2024.
//

#include "DEVSPORTS.h"

void Act::find_money(std::vector<int>*arr) {

    int left_money = arr->at(0) - arr->at(1);
    int req_money  = arr->at(2) + arr->at(3) + arr->at(4);

    if(left_money>=req_money)
        std::cout<<"YES"<<"\n";
    else
        std::cout<<"NO"<<"\n";
}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::vector<int>arr(5);
        for(int i=0;i <5; i++)
        {
            std::cin>>arr[i];
        }

        Act::find_money(&arr);
    }

}
//
// Created by yashs on 13-02-2024.
//

#include "MONOPOLY2.h"

void Monopoly::find_comp(std::vector<int>a) {

    std::sort(a.begin(),a.end());
    int sum = 0;

    for(int i = 0 ; i<=a.size()-2;i++)
    {
        sum += a.at(i);
    }

    //std::cout<<sum<<"\n";
    if(a.at(a.size()-1)>sum)
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
        std::vector<int>a(4);
        for(int i=0;i<4;i++)
        {
            std::cin>>a[i];
        }

        Monopoly::find_comp(a);
    }
}
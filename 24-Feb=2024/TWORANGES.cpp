//
// Created by yashs on 24-02-2024.
//

#include "TWORANGES.h"

void Range::find_num(std::vector<int> *a) {

    std::vector<int>hmap;

    for(int i=a->at(0);i <=a->at(1); i++)
    {
        hmap.push_back(i);
    }

    for(int i=a->at(2);i <=a->at(3); i++)
    {
        hmap.push_back(i);
    }

    std::sort(hmap.begin(),hmap.end());
    std::vector<int>::iterator ip;

    ip = std::unique(hmap.begin(), hmap.end());
    hmap.resize(std::distance(hmap.begin(), ip));
    std::cout<<hmap.size()<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::vector<int>a(4);
        for(int i=0; i<4; i++)
        {
            std::cin>>a[i];
        }
        Range::find_num(&a);
    }
}
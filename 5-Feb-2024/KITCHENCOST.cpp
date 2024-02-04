//
// Created by yashs on 05-02-2024.
//
#include "KITCHENCOST.h"

void Kitchen::cost(const std::vector<int>*a, const std::vector<int>*b,const int x)
{
    int cost = 0;
    int i = 0;

    for (const auto& it : *a)
    {
        if(it>=x){
            cost += b->at(i);
        }

        i++;
    }

    std::cout<<cost<<std::endl;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        int x;
        std::cin>>n>>x;
        std::vector<int>a;
        std::vector<int>b;
        int el = 0;

        for(int i=0;i<n;i++){
            std::cin>>el;
            a.push_back(el);
        }
        for(int j=0;j<n;j++){
            std::cin>>el;
            b.push_back(el);
        }

        Kitchen::cost(&a,&b,x);

    }

    return 0;
}
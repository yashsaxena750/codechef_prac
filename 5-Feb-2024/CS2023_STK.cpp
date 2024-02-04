//
// Created by yashs on 05-02-2024.
//

#include "CS2023_STK.h"

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int>a;
        std::vector<int>b;
        int el = 0;

        for(int i=0;i<n;i++){
            std::cin>>el;
            a.push_back(el);
        }
        for(int i=0;i<n;i++){
            std::cin>>el;
            a.push_back(el);
        }

        Streak::maxs(&a,&b);
    }
}
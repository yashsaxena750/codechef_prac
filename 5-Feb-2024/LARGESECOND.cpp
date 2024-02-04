//
// Created by yashs on 05-02-2024.
//

#include "LARGESECOND.h"

void Lsec::ssum(const std::vector<int>*a) {

    int sum = 0;
    for(int i = a->size()-2;i>=0;i--)
    {
        if( a->at(i)< a->at(a->size()-1) )
        {
            sum = a->at(i) + a->at(a->size()-1);
            break;
        }
    }
    std::cout<<sum<<std::endl;
}


int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int>a;
        int el = 0;

        for(int i=0;i<n;i++){

            std::cin>>el;
            a.push_back(el);
        }
        std::sort(a.begin(), a.end());
        Lsec::ssum(&a);

    }
}
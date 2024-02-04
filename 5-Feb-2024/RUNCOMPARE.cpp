//
// Created by yashs on 05-02-2024.
//

#include "RUNCOMPARE.h"

void HappySad::hs(const std::vector<int> *a, const std::vector<int> *b) {

    int happyday = 0;

    for(int i=0;i<a->size();i++)
    {
        if( (a->at(i)==b->at(i)) || ((a->at(i)*2>=b->at(i))  && (b->at(i)*2>=a->at(i)) ))
            happyday++;
    }

    std::cout<<happyday<<std::endl;

}


int main()
{
    int t;
    std::cin>>t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> a;
        std::vector<int> b;
        int el = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> el;
            a.push_back(el);
        }
        for (int i = 0; i < n; i++) {
            std::cin >> el;
            b.push_back(el);
        }

        HappySad::hs(&a,&b);
    }
    return 0;
}
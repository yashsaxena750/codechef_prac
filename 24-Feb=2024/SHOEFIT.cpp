//
// Created by yashs on 24-02-2024.
//

#include "SHOEFIT.h"

void shoeFit::find_fit(std::vector<int> *a) {

    std::sort(a->begin(),a->end());
    if(a->at(0)==0&&a->at(2)==1)
        std::cout<<1<<"\n";
    else
        std::cout<<0<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::vector<int>a(3);

        for(int i=0; i<3; i++)
        {
            std::cin>>a[i];
        }

        shoeFit::find_fit(&a);
    }
}
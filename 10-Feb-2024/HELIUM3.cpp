//
// Created by yashs on 10-02-2024.
//

#include "HELIUM3.h"


void Helium::find_energy(const std::vector<int> *a) {

    if(  (a->at(0)*a->at(1)) <= (a->at(2)*a->at(3)) )
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

        Helium::find_energy(&a);
    }

    return 0;
}
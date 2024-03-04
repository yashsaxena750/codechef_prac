//
// Created by yashs on 05-03-2024.
//

#include "MOONSOONP.h"

void moonTop::find_energy(std::vector<int>*car, std::vector<int>*stn, int cn, int sn, int hr ) {


    std::sort(car->begin(),car->end(),std::greater<int>());
    std::sort(stn->begin(),stn->end(),std::greater<int>());
    int total_energy = 0;
    int i = 0;
    int mn = std::min(cn,sn);
    while(mn)
    {
        if(stn->at(i)*hr>car->at(i)) {
            total_energy += car->at(i);
            i++;
            mn--;
        }
        else
        {
            total_energy += stn->at(i) * hr;
            i++;
            mn--;
        }
    }

    std::cout<<total_energy<<"\n";



}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int cn = 0;
        int sn = 0;
        int hr = 0;
        std::cin>>cn>>sn>>hr;
        std::vector<int>car(cn);
        std::vector<int>stn(sn);

        for(int i=0; i<cn; i++)
        {
            std::cin>>car[i];
        }
        for(int i=0; i<sn; i++)
        {
            std::cin>>stn[i];
        }

        moonTop::find_energy(&car,&stn,cn,sn,hr);
    }
}
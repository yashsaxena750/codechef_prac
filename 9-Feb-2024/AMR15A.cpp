//
// Created by yashs on 09-02-2024.
//

#include "AMR15A.h"

void Kattapa::find_sena(std::vector<int> *sena, int) {

    int even_count = 0;
    int odd_count = 0;
    for (const auto& element : *sena)
    {
        if(element%2==0)
            even_count++;
        else
            odd_count++;
    }

    if(even_count>odd_count)
        std::cout<<"READY FOR BATTLE"<<"\n";
    else
        std::cout<<"NOT READY"<<"\n";

}

int main()
{
    int n = 0;
    std::cin>>n;
    std::vector<int>sena(n);
    for(int i =0; i<n; i++)
    {
        std::cin>>sena[i];
    }

    Kattapa::find_sena(&sena,n);

}
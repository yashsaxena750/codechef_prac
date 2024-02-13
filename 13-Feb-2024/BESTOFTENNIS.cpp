//
// Created by yashs on 14-02-2024.
//

#include "BESTOFTENNIS.h"

void bestnSets::find_sets(int a, int b) {

    std::cout<<(a+b)+std::abs(a-b) - 1<<"\n";


}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int a = 0;
        int b = 0;
        std::cin>>a>>b;
        bestnSets::find_sets(a,b);

    }
}
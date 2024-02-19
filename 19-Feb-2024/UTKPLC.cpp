//
// Created by yashs on 19-02-2024.
//

#include "UTKPLC.h"

void offLet::find_comp(std::vector<char> *prior, char a, char b) {

    int fci = 0;
    int sci = 0;

    auto it = std::find(prior->begin(), prior->end(), a);

    if (it != prior->end()) {
        fci = std::distance(prior->begin(), it);
    }

    auto itr = std::find(prior->begin(), prior->end(), b);

    if (itr != prior->end()) {
        sci = std::distance(prior->begin(), itr);
    }

    std::cout<<prior->at(std::min(fci,sci))<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        std::vector<char>prior(3);
        for(int i=0; i<3; i++)
        {
            std::cin>>prior[i];
        }
        char a = 'a';
        char b = 'a';

        std::cin>>a>>b;

        offLet::find_comp(&prior,a,b);
    }
}
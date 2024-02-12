//
// Created by yashs on 10-02-2024.
//

#include "NOTEBOOK.h"


void Pulp::find_book(int pam) {

    std::cout<<(pam*10)<<"\n";

}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int pam = 0;
        std::cin>>pam;

        Pulp::find_book(pam);
    }
}
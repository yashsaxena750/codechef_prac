//
// Created by yashs on 10-02-2024.
//

#include "EXPERT.h"

void Setter::find_exp(const int a, const int b) {

    if( ((float)b/a) *100 >= 50  )
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
        int a = 0;
        int b = 0;
        std::cin>>a>>b;

        Setter::find_exp(a,b);
    }
}
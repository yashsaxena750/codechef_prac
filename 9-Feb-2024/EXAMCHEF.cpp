//
// Created by yashs on 09-02-2024.
//

#include "EXAMCHEF.h"

void schoolPass::find_perc(int a, int b, int c) {


    if(a<=INT_MAX && b<=INT_MAX && c<=INT_MAX) {
        if (((float) c / (a  * b))  * 100 > 50)
            std::cout << "YES" << "\n";
        else
            std::cout << "NO" << "\n";
    }
    else
        exit(1);

}

int main()
{

    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        std::cin>>a>>b>>c;

        schoolPass::find_perc(a,b,c);
    }
}
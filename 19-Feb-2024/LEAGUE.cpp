//
// Created by yashs on 19-02-2024.
//

#include "LEAGUE.h"

void matchPoints::find_diff(int n) {


    std::cout<<3*(n-1) - 3*( (n-1)/2 )<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int n = 0;
        std::cin>>n;
        matchPoints::find_diff(n);
    }


}
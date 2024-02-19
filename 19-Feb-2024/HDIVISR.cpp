//
// Created by yashs on 19-02-2024.
//

#include "HDIVISR.h"

void Divisor::find_div(int n) {

    for(int i=10; i>=1; i--)
    {
        if(n%i==0)
        {
            std::cout<<i<<"\n";
            break;
        }
    }

}

int main()
{
    int n = 0;
    std::cin>>n;
    Divisor::find_div(n);
}
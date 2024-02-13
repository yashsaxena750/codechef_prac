//
// Created by yashs on 14-02-2024.
//

#include "SUPCHEF.h"

void supChef::find_time(int a, int b, int c) {


    if( a > b*c )
        std::cout<<"YES"<<"\n";
    else
        std::cout<<"NO"<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--) {
        int a = 0;
        int b = 0;
        int c = 0;
        std::cin >> a >> b >> c;
        supChef::find_time(a, b, c);
    }
}
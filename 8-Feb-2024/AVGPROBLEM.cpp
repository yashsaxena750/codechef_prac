//
// Created by yashs on 08-02-2024.
//

#include "AVGPROBLEM.h"

void Average::find_av(int A, int B, int C) {

    //std::cout<<(float)(A+B)/2<<"\n";

    if( float(A+B)/2 > C )
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
        int A =0;
        int B =0;
        int C =0;

        std::cin>>A>>B>>C;

        Average::find_av(A,B,C);
    }

}
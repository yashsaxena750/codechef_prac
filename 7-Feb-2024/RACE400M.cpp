//
// Created by yashs on 07-02-2024.
//

#include "RACE400M.h"

void Race::find_racer(int x, int y, int z)
{

    //std::cout<<400/x<<"\t"<<400/y<<"\t"<<400/z<<"\n";

    int n=std::min(x,y);
    int k=std::min(n,z);
    if(k==x){std::cout<<"alice"<<std::endl;}
    else if(k==y){std::cout<<"bob"<<std::endl;}
    else if(k==z){std::cout<<"charlie"<<std::endl;}

}

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int x = 0;
        int y = 0;
        int z = 0;
        std::cin>>x>>y>>z;
        Race::find_racer(x,y,z);

    }

}


//
// Created by yashs on 06-03-2024.
//

#include "SNELECTP.h"

void findSM::eatSnake(std::string snmg) {

    int snake_count = 0;
    int mongo_count = 0;

    for(int i=0; i<snmg.length(); i++)
    {
        if(snmg[i]=='s')
            snake_count++;
        else
            mongo_count++;
    }

    int i = 0;
    while(i<snmg.length())
    {

        if( (snmg[i]=='s' && snmg[i+1]=='m') ||(snmg[i]=='m' && snmg[i+1]=='s') ) {
            snake_count--;
            i = i+2;

        }
        else
        {
            i++;
        }

    }
    if(snake_count > mongo_count)
        std::cout<<"snakes"<<"\n";
    else if(snake_count < mongo_count)
        std::cout<<"mongooses"<<"\n";
    else if(snake_count == mongo_count)
    std::cout<<"tie"<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        std::string snmg = "";
        std::cin>>snmg;
        findSM::eatSnake(snmg);
    }
}
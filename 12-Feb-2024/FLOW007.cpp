//
// Created by yashs on 13-02-2024.
//

#include "FLOW007.h"

void revNumber::rev_num(std::string num) {

    std::string fnum;
    int flag = 0;

    for(int i =num.length()-1; i>=0; i--)
    {
        if(num[i]!='0')
        {
            flag = i;
            break;
        }
    }

    for(int i = flag; i>=0; i--)
    {
        fnum += num[i];
    }


    std::cout<<fnum<<"\n";


}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::string num;
        std::cin>>num;
        revNumber::rev_num(num);
    }
}
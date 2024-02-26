//
// Created by yashs on 25-02-2024.
//

#include "DIGARR.h"

void Digar::find_pos(std::string n) {

    int flag = 0;

    for(int i=0; i<n.length(); i++)
    {
        if(n[i]=='0' || n[i]=='5')
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        std::cout<<"Yes"<<"\n";
    else
        std::cout<<"No"<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int D = 0;
        std::cin>>D;
        std::string n = "";
        std::cin>>n;
        Digar::find_pos(n);
    }
}
//
// Created by yashs on 13-02-2024.
//

#include "TODOLIST.h"

void toDo::find_diff(std::vector<int>a, int n) {

    int delete_prob = 0;

    for(int i=0; i<n; i++)
    {
        if(a.at(i)>=1000)
            delete_prob++;
    }

    std::cout<<delete_prob<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int n = 0;
        std::cin>>n;
        std::vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

        toDo::find_diff(a,n);
    }
}
//
// Created by yashs on 06-03-2024.
//

#include "MAXSCP_help.h"

void arrMax::always_Max(std::vector<int> *) {
//not sure what to do here, main is enough in this case as another function will complicate things
}

int main()
{

    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int n = 0;
        std::cin>>n;
        int sum = 0;
        int size = n;
        while(n--)
        {
            std::vector<int>arr(size);
            for(int i=0;i<size;i++)
            {
                std::cin>>arr[i];
            }
            std::sort(arr.begin(),arr.end());
            sum += arr.at(size-1);
        }
        std::cout<<sum<<"\n";
    }
}
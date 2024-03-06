//
// Created by yashs on 07-03-2024.
//

#include "PERMEXIS.h"

void permExist::arr_Perm(std::vector<int> *arr) {

    int flag = 1;
    std::sort(arr->begin(),arr->end());
    for(int i=0; i<arr->size()-1; i++)
    {
        if( std::abs(arr->at(i)-arr->at(i+1))>1 ) {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        std::cout<<"YES"<<"\n";
    }
    else
    {
        std::cout<<"NO"<<"\n";
    }

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int n = 0;
        std::cin>>n;
        std::vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
            arr.push_back(arr[i]);
        }

        permExist::arr_Perm(&arr);
    }
}
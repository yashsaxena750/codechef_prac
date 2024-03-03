//
// Created by yashs on 03-03-2024.
//

#include "EQDIS.h"


void Arr::findArr(std::vector<int>*arr, int n) {

    int flag = 0;
    std::sort(arr->begin(),arr->end());
    for(int i=0; i<n-1; i++)
    {
        if(arr->at(i)==arr->at(i+1))
        {
            flag = 1;
            break;
        }
    }

    if(flag==0 && n%2!=0)
        std::cout<<"NO"<<"\n";
    else if(flag==0 && n%2==0)
        std::cout<<"YES"<<"\n";
    else
        std::cout<<"YES"<<"\n";


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
        }

        Arr::findArr(&arr,n);

    }

}
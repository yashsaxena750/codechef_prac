//
// Created by yashs on 06-03-2024.
//

#include "SUMPAIRC.h"
typedef long long int ll;

void diffSum::max_Sum(std::vector<int>*arr, int n, int d) {

    ll sum = 0;
    int i = n-1;

    std::sort(arr->begin(), arr->end());
    while(i>0)
    {

        if( arr->at(i)-arr->at(i-1) < d )
        {
            sum += (arr->at(i) + arr->at(i-1));
            i--;
        }
        i--;
    }


    std::cout<<sum<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--){
        int n = 0;
        int d = 0;
        std::cin>>n>>d;
        std::vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        diffSum::max_Sum(&arr,n, d);
    }
}
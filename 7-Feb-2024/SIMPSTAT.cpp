//
// Created by yashs on 08-02-2024.
//

#include "SIMPSTAT.h"

void kAverage::find_av(int n, int k, std::vector<int> *a) {

    //2 9 -10 25 1 -> -10 1 2 9 25
    std::sort(a->begin(),a->end());
    float sum = 0;

    for(int i = k ;i<=n-1-k;i++)
    {

        sum += a->at(i);
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout<<sum/(n-(k+k))<<"\n";


}

int main(){

    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::vector<int>a(n);
        for(int i=0;i<n;i++){
            std::cin>>a[i];
        }

        kAverage::find_av(n,k,&a);
    }
}
//
// Created by yashs on 28-02-2024.
//

#include "MAXDIFF.h"

void packet::find_diff(std::vector<int> *a, int k) {


    //3 14 101 194 1062
    std::sort(a->begin(),a->end());
    int skid = 0;
    int spapa = 0;

    for(int i=0;i<k;i++)
    {
        skid += a->at(i);
    }

    for(int i=k;i<a->size();i++)
    {
        spapa += a->at(i);
    }

        std::cout<<skid<<"\t"<<spapa<<"\n";
//    std::cout<<std::abs(skid-spapa)<<"\n";


}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int n = 0;
        int k = 0;
        std::cin>>n>>k;
        std::vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

        packet::find_diff(&a,k);
    }
}
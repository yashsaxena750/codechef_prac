//
// Created by yashs on 28-02-2024.
//

#include "DISTINCTCOL.h"

void ballBox::find_box(std::vector<int>*a, int n) {

    std::sort(a->begin(),a->end());
    std::cout<<a->at(n-1)<<"\n";

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
        ballBox::find_box(&a,n);
    }
}
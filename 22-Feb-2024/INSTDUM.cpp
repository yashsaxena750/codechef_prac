//
// Created by yashs on 22-02-2024.
//

#include "INSTDUM.h"

void Shubh::find_hund(std::vector<float> *a,int n) {


    int hc = 0;
    float sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += a->at(i);
        if( (sum/(i+1))*100 == 100 ) {
            hc++;
        }
    }

    std::cout<<hc<<"\n";

}

int main()
{
    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int n = 0;
        std::cin>>n;

        std::vector<float>a(n);
        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

        Shubh::find_hund(&a,n);
    }
}
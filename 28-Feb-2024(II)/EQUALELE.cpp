//
// Created by yashs on 28-02-2024.
//

#include "EQUALELE.h"

void Mequal::find_oper(std::vector<int>*a, int n) {

    std::sort(a->begin(),a->end());

    std::unordered_map<int, int> table;
    for (int i = 0; i < n; i++)
        table[a->at(i)]++;

    int maxFrequency = 0;
    int loopc = 0;

    for (const auto& pair : table) {
        loopc++;
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
        }
    }

    if(loopc==1)
        std::cout<<0<<"\n";
    else {
            std::cout << abs(n - maxFrequency) << "\n";
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
        std::vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

        Mequal::find_oper(&a,n);
    }
}
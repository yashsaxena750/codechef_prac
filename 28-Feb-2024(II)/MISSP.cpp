//
// Created by yashs on 28-02-2024.
//

#include "MISSP.h"

void Dolls::find_pair(std::vector<int>*a, int n) {

    std::unordered_map<int, int> table;
    for (int i = 0; i < n; i++)
        table[a->at(i)]++;

    for (auto e : table)
        if (e.second %2!=0)
            std::cout << e.first <<"\n";


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

        Dolls::find_pair(&a,n);
    }

}
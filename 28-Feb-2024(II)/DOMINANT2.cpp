//
// Created by yashs on 28-02-2024.
//

#include "DOMINANT2.h"

void findDom::find_freq(std::vector<int>*a, int n)
{

    std::sort(a->begin(),a->end());
    std::unordered_map<int, int> table;
    std::vector<int>freq;

    for (int i = 0; i < n; i++)
        table[a->at(i)]++;

    for (const auto& pair : table) {
        freq.push_back(pair.second);
    }
    std::sort(freq.begin(),freq.end());

    if(freq.size()>1) {
        if (freq.at(freq.size() - 1) != freq.at(freq.size() - 2))
            std::cout << "YES" << "\n";
        else
            std::cout << "NO" << "\n";
    }
    else
    {
        std::cout << "YES" << "\n";
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

        findDom::find_freq(&a,n);
    }
}
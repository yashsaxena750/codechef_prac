//
//  AOCV221.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 29/01/24.
//

#include "AOCV221.hpp"
Candy::Candy()
{
    
}

void Candy::find_cprice(vector<int>A, int N)
{
    
    int flag = 0;
    unordered_map<int, int> frequencyMap;

    for (int element : A) 
    {
        if (frequencyMap.find(element) == frequencyMap.end())
        {
                frequencyMap[element] = 1;
        } else
        {
            frequencyMap[element]++;
        }
    }

        for (const auto& pair : frequencyMap) {
            if(pair.second>2)
            {
                flag = 1;
                break;
            }
        }
    
    if(flag)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
}

int main()
{
    Candy price;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>A;
        for(int i=0; i < 2*N; i++)
        {
            int el;
            cin>>el;
            A.push_back(el);
        }
        
        price.find_cprice(A,2*N);
    }
}

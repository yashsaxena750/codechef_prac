//
// Created by yashs on 08-02-2024.
//

#include "WATESTCASES.h"

void testCases::find_fail(int n,std::vector<int> *s, std::string v){

    std::vector<int>fcases;

    for(int i=0;i<n;i++)
    {
        if(v[i]=='0')
            fcases.push_back(s->at(i));
    }

    std::sort(fcases.begin(),fcases.end());

    std::cout<<fcases.at(0)<<"\n";
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int>s(n);
        for(int i=0;i<n;i++){
            std::cin>>s[i];
        }
        std::string v;
        std::cin>>v;

        testCases::find_fail(n,&s,v);

    }
}
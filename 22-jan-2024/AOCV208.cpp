//
//  AOCV208.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 22/01/24.
//
//         (___) "Moo have twenty
//         |===|  seconds to comply."
//  ________\_/ /
// | |        |
// # ||______||
//   ||      ||
//   ^^      ^^
//    RoboCow

#include "AOCV208.hpp"

Score::Score(){
    
}


void Score::twin(int arr[])
{
    int sc1 = 0;
    int sc2 = 0;
    
    for(int i=1;i<=10;i=i+2)
            sc1 += arr[i];
        
    for(int i=2;i<=10;i=i+2)
            sc2 += arr[i];
    
    if(sc1>sc2)
        cout<<1<<"\n";
    else if (sc2>sc1)
        cout<<2<<"\n";
    else
        cout<<0<<"\n";
}

int main()
{
    Score sc;
    
    int t;
    cin>>t;
    while(t--)
    {
        int arr[11];
        for(int i=1;i<=10;i++)
            cin>>arr[i];
        sc.twin(arr);
    }
    
    return 0;
}

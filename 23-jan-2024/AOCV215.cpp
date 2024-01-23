//
//  AOCV215.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 23/01/24.
//
//         (___) "Moo have twenty
//         |===|  seconds to comply."
//  ________\_/ /
// | |        |
// # ||______||
//   ||      ||
//   ^^      ^^
//    RoboCow

#include "AOCV215.hpp"

Array::Array(){
    
}

void Array::find_neg(int arr[], int N){
    int neg_count = 0;
    int zero_count = 0;
    
    for(int i=0;i<N;i++){
        
        if(arr[i]<0)
            neg_count++;
        
        if(arr[i]==0)
            zero_count++;
    }
    
    
    if(neg_count%2==0||zero_count>0)
        cout<<0<<"\n";
    else
        cout<<1<<"\n";
}

int main()
{
    Array obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
            
        }
        obj.find_neg(arr,N);
        
    }
    
}

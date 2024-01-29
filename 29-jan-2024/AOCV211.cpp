//
//  AOCV211.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 29/01/24.
//
//                         (__)
//                         (oo)
//    /---------------------\/
//  /  |   |   |   |   |   ||
// *   ||--||--||--||--||--||
//     ^^  ^^  ^^  ^^  ^^  ^^
//         Cowterpillar

#include "AOCV211.hpp"

Sgame::Sgame()
{
    
}

void Sgame::find_prof(vector<int>A,int N)
{
 
    
    int min = A[0];
    int pos = 0;
    int sum = 0;
    
    for(int i=1;i<N;i++)
    {
        if(A[i]<min)
        {
            min = A[i];
            pos = i;
        }
        
    }
    
   
    A.erase(A.begin()+pos);
    
    for(int num:A)
    {
        sum += num;
    }
    
    cout<<sum<<endl;
    
}


int main()
{
    Sgame obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>A;
        for(int i=0; i < N; i++)
        {
            int el;
            cin>>el;
            A.push_back(el);
        }
        
        obj.find_prof(A, N);
    }
    return 0;
}

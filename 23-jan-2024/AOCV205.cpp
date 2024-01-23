//
//  AOCV205.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 23/01/24.
//
//          ^
//          | **~~~~~~~
//          | **~~~~~~~
//     (__) | ~~~~~~~~~
//     (oo) | ~~~~~~~~~
//      \/  |
//   /(   \/|
//    (   ) |
//     /~\  |
// Patriotic Cow

#include "AOCV205.hpp"

MINEL::MINEL(){
    
}

void MINEL::find_min(int A[], int N)
{
    int min_el_ind = 0;
    int min_el = 0;
    
    if(N>1)
    {
        for(int i=1;i<N;i++)
        {
            if(A[i]<A[min_el_ind])
            {
                min_el_ind = i;
                min_el = A[i];
            }
            
        }
        
        
        if(min_el_ind!=0)
        {
            for(int i = min_el_ind;i>0;i--)
            {
                
                A[i] = A[i-1];
            }
            
            
            A[0] = min_el;
        }
        
        
        for(int i=0;i<N;i++)
            cout<<A[i]<<" ";
    }
    else
        cout<<A[0];
}

int main()
{
    MINEL obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i < N; i++)
        {
            cin >> A[i];
        }
        
        obj.find_min(A, N);
    }
    
}

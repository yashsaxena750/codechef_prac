//
//  AOCV206.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 23/01/24.
//
//       (__)
//       (oo)
//      /'^^^-m
//     / '' ` )
//    |      /|
//    |  |  | |
//    |_____|_|
//     //|| ||
//    *  ww ww
// Cow'nt Dracula

#include "AOCV206.hpp"
#include "AOCV205.hpp"

MAXEL::MAXEL(){
    
}

void MAXEL::find_max(int A[], int N)
{
    int max_el = A[0];
    
    for(int i=1;i<N;i++)
    {
        if(A[i]>max_el)
            max_el = A[i];
    }
    
    cout<<max_el<<" ";
    for(int i=N-1;i>=0;i--)
    {
        if(A[i]==max_el)
        {
            cout<<i<<"\n";
            break;
        }
    }
    
}

int main()
{
    MAXEL obj;
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
        
        obj.find_max(A, N);
    }
    
}

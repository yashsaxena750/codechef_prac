//
//  AOCV212.cpp
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

#include "AOCV212.hpp"

B0wb::B0wb()
{
    
}

void B0wb::hdest(int A[], int N, int X)
{
    int i = 0;
    for(i=N-1;i>=0;i--)
    {
        if(A[i]<X)
        {
            break;
        }
    }
    cout<<i+1<<"\n";
    
    
}

int main()
{
    B0wb obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N,X;
        cin >> N>>X;
        int A[N];
        for(int i=0; i < N; i++)
        {
            cin >> A[i];
        }
        
        obj.hdest(A, N, X);
    }
}

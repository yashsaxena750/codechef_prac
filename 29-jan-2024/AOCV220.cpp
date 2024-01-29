//
//  AOCV220.cpp
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

#include "AOCV220.hpp"

Kitchen::Kitchen()
{
    
}

void Kitchen::find_ctime(int A[], int B[], int N)
{
    int scount = 0;
    if(A[0]>=B[0])
        scount++;
    
    for(int i=1;i<N;i++)
    {
        if(abs(A[i]-A[i-1])>=B[i])
            scount++;
    }
    cout<<scount<<endl;
}

int main()
{
    Kitchen cook;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        int A[N], B[N];
        for(int i=0; i < N; i++)
        {
            cin >> A[i];
        }
        for(int i=0; i < N; i++)
        {
            cin >> B[i];
        }
        
        cook.find_ctime(A, B, N);
    }
}

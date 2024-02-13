//
// Created by yashs on 12-02-2024.
//

#include "THREETOPICS.h"

void Topics::find_win(int A, int B, int C, int X) {

    if(  (A==X) || (B==X) || (C==X)  )
        std::cout<<"Yes"<<"\n";
    else
        std::cout<<"No"<<"\n";

}

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int X = 0;
    std::cin>>A>>B>>C;
    Topics::find_win(A,B,C,X);
}
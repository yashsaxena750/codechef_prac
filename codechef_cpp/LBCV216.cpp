//
//  LBCV216.cpp
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

#include "LBCV216.hpp"

Exam::Exam(){
    
}

void Exam::score(int N, int X, int P){
    
    if(X*3-(N-X)>=P)
        cout<<"PASS"<<"\n";
    else
        cout<<"FAIL"<<"\n";
    
}

int main()
{
    
    Exam e;
    int N,X,P;
    cin>>N>>X>>P;
    e.score(N, X, P);
    
    return 0;
}

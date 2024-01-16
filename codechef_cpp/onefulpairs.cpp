//
//  onefulpairs.cpp
//  CChef
//
//  Created by Yash Saxena on 16/01/24.
//

#include <stdio.h>
#include "iostream"

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    if(a+b+(a*b) == 111)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}

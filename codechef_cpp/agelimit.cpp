//
//  agelimit.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 17/01/24.
//

#include "agelimit.hpp"

Age::Age() {

}

void Age::comp_exam(int x, int y, int a)
{
    if(a>=x && a<y)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}


int main()
{
    Age age;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a;
        cin>>x>>y>>a;
        age.comp_exam(x,y,a);
    }
    
}

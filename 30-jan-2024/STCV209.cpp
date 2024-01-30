//
//  STCV209.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 30/01/24.
//

#include "STCV209.hpp"

Strgame::Strgame()
{

}

void Strgame::find_prize(int X, string S)
{
    int carp = 0;
    int chep = 0;
    int drap = 0;
    
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='C')
            carp++;//4
        else if(S[i]=='N')
            chep++;//6
        else
            drap++;//4
    }
    
    if(carp>chep)
        cout<<60*X<<"\n";
    else if(carp==chep)
        cout<<55*X<<"\n";
    else
        cout<<40*X<<"\n";
}

int main()
{
    Strgame obj;
    int t;
    cin >> t;
    while(t--)
    {
        string S;
        int X;
        cin >> X;
        cin >> S;
        obj.find_prize(X, S);
    }
}

//
// Created by yashs on 03-03-2024.
//

#include "MAXEXP.h"


void stringSort::findmath(std::string eq, int n) {

    int pc = 0;
    int nc = 0;

    for(int i=0; i<n; i++)
    {
        if(eq[i]=='+') {
            pc++;
            eq.erase(i,1);
        }

        else if(eq[i]=='-') {
            nc++;
            eq.erase(i, 1);
        }
    }




    int i = (n-(nc+pc))-1;
    std::sort(eq.begin(), eq.end(), std::greater<char>());
    while(nc)
    {
        eq.insert(i,1,'-');
        i -= 1;
        nc--;
    }
    while(pc)
    {
        eq.insert(i,1,'+');
        i -= 1;
        pc--;
    }
    std::cout<<eq<<"\n";

}

int main()
{

    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int n = 0;
        std::cin>>n;
        std::string eq = "";
        std::cin>>eq;
        stringSort::findmath(eq, n);

    }
}
//
// Created by yashs on 07-02-2024.
//

#include "FACEBOOK.h"

void faceBook::find_post(std::vector<int> *a, std::vector<int> *b) {

    int maxlike_ind = 0;
    for(int i=1;i<a->size();i++)
    {
        if( (a->at(i)>a->at(maxlike_ind)) || (a->at(i)==a->at(maxlike_ind)) && ( b->at(i)>b->at(maxlike_ind)  )  )
            maxlike_ind = i;
    }

    std::cout<<maxlike_ind+1<<"\n";
}

int main()
{

    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;

        std::vector<int>a(n);
        std::vector<int>b(n);

        for(int i=0;i<n;i++){
            std::cin>>a[i];
        }
        for(int i=0;i<n;i++){
            std::cin>>b[i];
        }

        faceBook::find_post(&a,&b);

    }

}
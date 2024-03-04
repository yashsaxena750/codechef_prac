//
// Created by yashs on 05-03-2024.
//

#include "TACHSTCKC.h"

void Stickclass::Find_stick(std::vector<int>*arr, int t, int d) {

    std::sort(arr->begin(),arr->end());
    int stick_count = 0 ;
    int i = 0;

    while(i<t-1)
    {
        if(abs(arr->at(i)-arr->at(i+1))<=d)
        {
            stick_count++;
            i = i+2;
        }
        else
        {
            i++;
        }
    }

    std::cout<<stick_count<<"\n";

}

int main()
{
     int t = 0;
     int d = 0;
     std::cin>>t>>d;
     std::vector<int>arr(t);
     for(int i=0; i<t; i++)
     {
         std::cin>>arr[i];
     }

     Stickclass::Find_stick(&arr,t,d);

}
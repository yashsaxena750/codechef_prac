//
// Created by yashs on 16-02-2024.
//

#include "MILEAGE.h"

void Mileage::find_car(const std::vector<float> *a) {

    float petrol = (a->at(1)/a->at(3))*a->at(0);
    float diesel = (a->at(2)/a->at(4))*a->at(0);

    if( petrol > diesel )
        std::cout<<"DIESEL"<<"\n";

    else if ( petrol < diesel )
        std::cout<<"PETROL"<<"\n";

    else
        std::cout<<"ANY"<<"\n";


}

int main()
{
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        std::vector<float>a(5);

        for (int i = 0; i < 5; i++)
        {
            std::cin >> a[i];
        }

        Mileage::find_car(&a);

    }
}
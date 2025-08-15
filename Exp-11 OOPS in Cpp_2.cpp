//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-11

//Program-2
#include<iostream>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int year;
    float cost;
};

int main(){

    Car c1;
    cout<<"Enter Car-1 Brand: ";
    cin>>c1.brand;

    cout<<"Enter Car-1 Model: ";
    cin>>c1.model;

    cout<<"Enter Car-1 Year: ";
    cin>>c1.year;

    cout<<"Enter Car-1 Cost: ";
    cin>>c1.cost;

    Car c2;
    cout<<"Enter Car-2 Brand: ";
    cin>>c2.brand;

    cout<<"Enter Car-2 Model: ";
    cin>>c2.model;

    cout<<"Enter Car-2 Year: ";
    cin>>c2.year;

    cout<<"Enter Car-2 Cost: ";
    cin>>c2.cost;

    cout<<"\n";

    cout<<"Car-1 Brand is: "<<c1.brand<<endl;
    cout<<"Car-1 Model is: "<<c1.model<<endl;
    cout<<"Car-1 Year is: "<<c1.year<<endl;
    cout<<"Car-1 Cost is: "<<c1.cost<<endl;

    cout<<"\n";

    cout<<"Car-2 Brand is: "<<c2.brand<<endl;
    cout<<"Car-2 Model is: "<<c2.model<<endl;
    cout<<"Car-2 Year is: "<<c2.year<<endl;
    cout<<"Car-2 Cost is: "<<c2.cost<<endl;

    return 0;
}


/*==========OUTPUTS==========
Enter Car-1 Brand: BMW
Enter Car-1 Model: X5
Enter Car-1 Year: 2024
Enter Car-1 Cost: 9500000
Enter Car-2 Brand: Land-Rover
Enter Car-2 Model: Defender
Enter Car-2 Year: 2025
Enter Car-2 Cost: 10000000

Car-1 Brand is: BMW
Car-1 Model is: X5
Car-1 Year is: 2024
Car-1 Cost is: 9.5e+06

Car-2 Brand is: Land-Rover
Car-2 Model is: Defender
Car-2 Year is: 2025
Car-2 Cost is: 1e+07
*/

//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-11

//Program-6
#include<iostream>
using namespace std;

class Cube{
    
    float side=5;

    public:
    float vol_in(){
        return side*side*side;
    }
};


int main(){

    Cube c1;
    cout<<"Volume of Cube is(by method): "<<c1.vol_in()<<endl;
    
    return 0;
}
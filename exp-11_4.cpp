//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-11

//Program-4
#include<iostream>
using namespace std;

class Calc{
    public:
    float num1;
    float num2;

    float add(float num1, float num2){
        return num1+num2;
    }

    float sub(float num1, float num2){
        return num1-num2;
    }

    float multi(float num1, float num2){
        return num1*num2;
    }

    float div(float num1, float num2){
        return num1/num2;
    }
};

int main(){

    Calc c1;
    cout<<"Enter Num-1: ";
    cin>>c1.num1;

    cout<<"Enter Num-2: ";
    cin>>c1.num2;

    cout<<"\n";

    cout<<"Addition: "<<c1.add(c1.num1, c1.num2)<<endl;
    cout<<"Subtraction: "<<c1.sub(c1.num1, c1.num2)<<endl;
    cout<<"Multiplication: "<<c1.multi(c1.num1, c1.num2)<<endl;
    cout<<"Division: "<<c1.div(c1.num1, c1.num2)<<endl;

    return 0;
}
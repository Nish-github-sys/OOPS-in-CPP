//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-11

//Program-1
#include<iostream>
using namespace std;

class Student{
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){

    Student s1;
    s1.name="Nishka";
    s1.branch="E&TC";
    s1.subject="CDS";
    s1.year="SY";
    s1.result=9.27;

    Student s2;
    s2.name="Shwetal";
    s2.branch="E&TC";
    s2.subject="CDS";
    s2.year="SY";
    s2.result=9.26;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Subject: "<<s1.subject<<endl;
    cout<<"Year: "<<s1.year<<endl;
    cout<<"Result: "<<s1.result<<endl;

    cout<<"\n";

    cout<<"Name: "<<s2.name<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    cout<<"Subject: "<<s2.subject<<endl;
    cout<<"Year: "<<s2.year<<endl;
    cout<<"Result: "<<s2.result<<endl;

    return 0;
}


/*==========OUTPUTS==========
Name: Nishka
Branch: E&TC
Subject: CDS
Year: SY
Result: 9.27

Name: Shwetal
Branch: E&TC
Subject: CDS
Year: SY
Result: 9.26
*/

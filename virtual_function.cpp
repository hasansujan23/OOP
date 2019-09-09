#include<iostream>
using namespace std;

class A{
public:
    virtual void print(){
        cout<<"Base Class"<<endl;
    }
};

class B : public A{
public:
    void print(){ /// Function overriding..................
        cout<<"Derived class"<<endl;
    }
};

int main()
{
    A *a;
    B b;
    //a.print();
    a=&b;
    a->print();
    return 0;
}

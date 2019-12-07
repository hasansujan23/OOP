#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    Base(){
        cout<<"called Base class"<<endl;
    }
};

class Derived:public Base{
public:
    Derived(){
        cout<<"called derived class"<<endl;
    }
};


int main()
{
    Derived obj;
    return 0;
}

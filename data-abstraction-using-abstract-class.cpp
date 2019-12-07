#include<bits/stdc++.h>
using namespace std;

class Shape{ /// Abstract class that contains at least one pure virtual function
public:
    virtual void show()=0; ///Pure virtual function
};

class Circle:public Shape{
public:
    void show(){
        cout<<"Circle"<<endl;
    }
};

class Rectangle:public Shape{
public:
    void show(){
        cout<<"Rectangle"<<endl;
    }
};

int main()
{
    Shape *shape;
    Circle circle;
    Rectangle rectangle;

    shape=&circle;
    shape->show();

    shape=&rectangle;
    shape->show();

    return 0;
}

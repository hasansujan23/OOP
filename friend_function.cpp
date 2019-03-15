#include<iostream>
using namespace std;

class Shape;///Create forward reference of Class Shape

class Area{///Create the class Area which member function be friend of class Shape
public:
    void getArea(Shape obj);
};

class Shape{///Create class Shape
private:
    int length;
    int width;
    int height;
public:
    Shape(int a,int b,int c){
        length=a;
        width=b;
        height=c;
    }
    friend void Area::getArea(Shape obj);
};
///Define friend function
void Area::getArea(Shape obj){
    cout<<"Area: "<<obj.length*obj.width<<endl;
}

int main()
{
    Shape shape(3,4,5);
    Area area;
    area.getArea(shape);
    return 0;
}

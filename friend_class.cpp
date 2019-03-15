#include<iostream>
using namespace std;

class Shape{
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
    friend class Area;///Friend class Area
};

class Area{
public:
    void getArea(Shape obj){
        cout<<"Area: "<<obj.length*obj.width<<endl;   ///Since Area is friend of Shape, it can access private members of Shape.
    }
};

int main()
{
    Shape shape(2,4,6);
    Area area;
    area.getArea(shape);
    return 0;
}

#include<iostream>
using namespace std;

class Shape{
private:
    int l,h;
public:
    void setDetails(int a,int b);
    int getDetails(){
        return l*h;
    }
};
void Shape::setDetails(int a,int b){
    l=a;
    h=b;
}

class Rectangle:public Shape{
public:
    void showArea(){
        cout<<"Rectangle Area: "<<getDetails()<<endl;
    }
};

int main()
{
    Rectangle aRectangle;
    aRectangle.setDetails(3,6);
    aRectangle.showArea();
    return 0;
}

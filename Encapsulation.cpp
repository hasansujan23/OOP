#include<iostream>
using namespace std;

class Shape{
private:
    int l,w,h;
public:
    Shape(int l,int w,int h){
        this->l=l;
        this->w=w;
        this->h=h;
//        l=a;
//        w=b;
//        h=c;
    }
    void getRectangle(){
        cout<<l*w<<endl;
    }
};

int main()
{
    Shape s(2,4,7);
    s.getRectangle();
    return 0;
}

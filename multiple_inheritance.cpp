#include<iostream>
using namespace std;

class Area{
private:
    int length;
    int width;
public:
    void setArea(int x,int y){
    length=x;
    width=y;
    }
    int getArea(){
        return length*width;
    }
};

class Height{
private:
    int h;
public:
    void setHeight(int x){
        h=x;
    }
    int getHeight(){
        return h;
    }
};

class Volume:public Area,public Height{
public:
    void getVolume(){
        cout<<"Volume: "<<getArea()*getHeight()<<endl;
    }
};

int main()
{
    Volume vol;
    vol.setArea(4,3);
    vol.setHeight(7);
    vol.getVolume();
    return 0;
}

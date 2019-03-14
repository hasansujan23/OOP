#include<iostream>
using namespace std;

class Area
{
private:
    int length;
    int width;
public:
    Area(int a,int b){
        length=a;
        width=b;
    }
    int getArea(){
        return length*width;
    }
};

class Volume:public Area
{
private:
    int height;
public:
    Volume(int a,int b,int c):Area(a,b){ /// Call constructor of the base class with parameters from constructor of the derived class
        height=c;
    }
    void getVolume(){
        cout<<"Volume : "<<height*getArea()<<endl;
    }
};


int main()
{
    Volume volume(3,5,7);
    volume.getVolume();
    return 0;
}

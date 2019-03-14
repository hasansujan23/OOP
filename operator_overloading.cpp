#include<iostream>
using namespace std;

class Volume{
private:
    int length;
    int width;
    int height;
public:
    Volume(){
        length=0;
        width=0;
        height=0;
    }
    Volume(int a,int b,int c){
        length=a;
        width=b;
        height=c;
    }
    Volume operator +(Volume vol2){/// Operator overloading
        Volume temp;
        temp.length=length+vol2.length;
        temp.width=width+vol2.width;
        temp.height=height+vol2.height;
        return temp;
    }
    Volume operator +(int x){/// Operator overloading
        Volume temp;
        temp.length=length+x;
        temp.width=width+x;
        temp.height=height+x;
        return temp;
    }
    void getVolume(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
    }
};


int main()
{
    int n=5;
    Volume vol1(2,3,4);
    Volume vol2(1,2,3);
    Volume vol3;
    vol3=vol1+vol2;///Add two class
    //vol3=vol1+n;///Add variable with class
    vol3.getVolume();
    return 0;
}

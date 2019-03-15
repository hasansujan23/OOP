#include<iostream>
using namespace std;

class Shape{
public:
    void add(int a,int b){
        cout<<"Sum: "<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<"Sum: "<<a+b<<endl;
    }
    void add(string a,string b){
        cout<<"Sum: "<<a+b<<endl;
    }
};

int main()
{
    int a=5,b=10;
    double x=3.5,y=6.7;
    string s1="hello",s2=" world!";

    Shape obj;
    obj.add(a,b);
    obj.add(x,y);
    obj.add(s1,s2);
    return 0;
}

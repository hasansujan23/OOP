#include<iostream>
using namespace std;

class A{
public:
    int a;
    int b;
    string s[5];

    A(int x,int y,string p[]){
        a=x;
        b=y;

        for(int i=0;i<p.size();i++){
            s[i]=p[i];
        }
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;

        for(int i=0;i<5;i++){
            cout<<s[i]<<endl;
        }
    }
};

int main(){
    string *q[5];
    for(int i=0;i<5;i++){
        string x;
        cin>>x;
        q[i]=x;
    }
    A obj(10,20,q);

    obj.display();
    return 0;
}

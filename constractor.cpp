#include<iostream>
using namespace std;

class Student{
private:
    int roll;
    string name;
public:
    Student(int a,string s);   ///Constructor created
    ~Student(); ///Destructor created
    void getDetails(){///inline member function
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }

};
Student::Student(int a,string s){
    roll=a;
    name=s;
}
Student::~Student(){
    cout<<"Destructor called";
}
int main()
{
    Student aStudent(1,"Sujan Hasan");
    aStudent.getDetails();
    return 0;
}


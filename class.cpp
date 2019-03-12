#include<iostream>
using namespace std;

class Student{
private:
    int roll;
    string name;
public:
    void setDetails(int a,string s);
    void getDetails(){///inline member function
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
void Student::setDetails(int a,string s){
    roll=a;
    name=s;
}
int main()
{
    Student aStudent;
    aStudent.setDetails(1,"Sujan Hasan");
    aStudent.getDetails();
    return 0;
}

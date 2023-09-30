#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int emp_id;
    char name[40];
    double salary;

    public:
    Employee()
    {
        emp_id=0;
        strcpy(name,"Default");
        salary=0;
    }
    Employee(int i,char *emp_name,double s)
    {
        emp_id=i;
        strcpy(name,emp_name);
        salary=s;
    }

    void Accept();
    void Display();
};
void Employee::Accept()
{
    cout<<"Enter Id: "<<endl;
    cin>>emp_id;
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Enter Salary: "<<endl;
    cin>>salary;
}
void Employee:: Display()
{
    cout<<"Id--"<<emp_id<<endl;
    cout<<"Name--"<<name<<endl;
    cout<<"Salary--"<<salary<<endl;

}

int main()
{
    Employee e;
    e.Display();
}
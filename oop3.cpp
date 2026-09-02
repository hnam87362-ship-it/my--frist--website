#include<iostream>
using namespace std;
class engineer;
class teacher
{
private:
    int salary=0;
    string name="unknown";
public:
    teacher()
    {
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your salary";
        cin>>salary;
    }
friend void add(teacher ob1,engineer ob2);


};
class engineer
{
private:
    int salary=0;
    string name="unknown";
public:
    engineer()
    {
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your salary";
        cin>>salary;
    }
friend void add(teacher ob1 ,engineer ob2);
};
void add(teacher ob1 ,engineer ob2)
{
    if(ob1.name=="ali")
    {
        cout<<" the new salary of teacher"<<ob1.salary<<endl;
        ob1.salary+=1000;
        cout<<ob1.salary<<endl;


    }
    if(ob2.name=="malak")
    {
        cout<<" the new salary of engineer"<<ob2.salary<<endl;
        ob2.salary+=1000;
        cout<<ob2.salary<<endl;
    }

}
int main()
{
    teacher ob1;
    engineer ob2;
    add(ob1,ob2);

}
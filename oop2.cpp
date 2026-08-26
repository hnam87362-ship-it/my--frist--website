#include <iostream>
using namespace std;
class workers
{
private:
    int salary= 0;
    string name="unkown";
public:
    workers()
    {
        cout<<"enter your salary"<< endl;
        cin>>salary;
        cout<<"enter your name"<< endl;
        cin>>name;
    }
    friend void avarage(workers ob1 ,workers ob2,workers ob3);
};
void avarage(workers ob1 ,workers ob2,workers ob3)
{
    int avg=0;
    avg=(ob1.salary+ob2.salary+ob3.salary)/3;
    cout<<"avarage is of salary"<<avg<<endl;
}

int main()
{
    workers ob1;
    workers ob2;
    workers ob3;
    avarage(ob1,ob2,ob3);

return 0;
}
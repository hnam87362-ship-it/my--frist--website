#include <iostream>
using namespace std;

class car
{
private:
    string name;
    int price;
public:
    car(string n, int p)
    {
        name = n;
        price = p;
    }
    void display();
    friend void increase(car ob);
};
void increase(car ob)
{
    cout << "the old price of car" << ob.price << endl;
    ob.price += 1000;
    cout << "print a new price" << ob.price << endl;
}
void car::display()
{
    cout << "price is" << price << endl;
}

int main()
{
    car ob1("BMW", 1000);
    ob1.display();
    increase(ob1) ;
    return 0;
}
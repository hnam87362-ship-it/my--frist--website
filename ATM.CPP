#include <iostream>
using namespace std;

double balance = 1000;
int deposit = 0;
int withdDraw = 0;
int password = 1234;
int choice = 0;

void show()
{
    cout << "1: balance" << endl;
    cout << "2: deposit" << endl;
    cout << "3: withdDraw" << endl;
    cout << "4: Exit" << endl;
    cout << "**********" << endl;
}

void process()
{
    cout << "enter your password" << endl;
    cin >> password;

    do
    {
        if (password == 1234)
        {
            cout << "\nenter your choice" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "your balance is " << balance << endl;
                break;
            case 2:
                cout << "note: your balance is " << balance << endl;
                cout << "enter your amount" << endl;
                cin >> withdDraw;
                if (withdDraw > balance)
                {
                    cout << "you cant take this money" << endl;
                }
                else
                {
                    balance = balance - withdDraw;
                    cout << "now: you can do it " << balance << endl;
                }
                break;
            case 3:
                cout << "correct balance is " << balance << endl;
                cout << "enter your deposit" << endl;
                cin >> deposit;
                balance += deposit;
                break;
            case 4:
                cout << "thank you" << endl;
                break;
            default:
                cout << "invalid choice" << endl;
            }
        }
        else
        {
            char opthion = 'o';
            cout << "password is wrong, do you want to try again y or n? " << endl;
            cin >> opthion;
            if (opthion == 'y' || opthion == 'Y')
            {
                cout << "enter your password" << endl;
                cin >> password;
            }
            else
            {
                choice = 4;
            }
        }
    } while (choice != 4);
}

int main()
{
    show();
    process();
    return 0;
}
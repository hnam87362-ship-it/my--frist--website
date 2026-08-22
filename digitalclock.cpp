#include <iostream>
#include <windows.h> // عشان Sleep
using namespace std;

int main() {
    int hours, min, sec;
    
    cout << "enter hours: ";
    cin >> hours;
    cout << "enter minuts: ";
    cin >> min;
    cout << "enter sec: ";
    cin >> sec;
    
    while(true) {
        // طباعة الوقت بالشكل المطلوب
        cout << hours << " : " << min << " : " << sec << endl;
        
        // الانتظار ثانية (1000 مللي ثانية)
        Sleep(1000);
        
        sec++;
        
        if(sec == 60) {
            sec = 0;
            min++;
        }
        
        if(min == 60) {
            min = 0;
            hours++;
        }
        
        if(hours == 24) {
            hours = 0;
        }
    }
    
    return 0;
}
       


#include <iostream>
using namespace std;

int main() {
    int num;
    float temp;
    float f;
    float c;
  
    cout<<"What do you want to convert?"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cin>> num;


    switch(num){
    
    case 1:
        cout<<"Enter temperature:";
        cin>> temp;
        c = (temp*9/5)+32;
        cout<<"Your inputed temperature will be converted to Fahrenheit"<<endl;
        cout<<c<<" "<<"Fahrenheit";
        break;
    case 2:
        cout<<"Enter Temperature:";
        cin>> temp;
        f=(temp-32) *5/9; 
        cout<<"Your inputed temperature will be converted to Celcius"<<endl;  
        cout<<f<<" "<<"Celsius";
        break;
    }
    return 0;
}

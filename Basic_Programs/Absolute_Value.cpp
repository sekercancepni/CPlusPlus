//this program calculates the absolute value of a number
#include <iostream>
using namespace std;

int main() {
    float number;
    float abs_value;
    
    cout<<"Please enter your grade: ";
    cin>>number;
    
    if(number >= 0){
        abs_value = number;
    } else { 
        abs_value = (-1) * number;
    }
    
    cout<<"Absolute value is "<<abs_value<<endl;

    system("pause");
    return 0;
}

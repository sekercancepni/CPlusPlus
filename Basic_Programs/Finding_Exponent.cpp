//this program print the exponent of a number
#include <iostream>
using namespace std;

main() {
    int number;
    int exponent;
    int counter = 1;
    
    cout<<"Enter the number : ";
    cin>>number;
    
    cout<<"Enter the exponent : ";
    cin>>exponent;
    
    for(int i = 1; i <= exponent; i++) {
        counter = number * counter;
    }
    cout<<counter<<endl;//print counter
    
    system("pause");
    return 0;
}

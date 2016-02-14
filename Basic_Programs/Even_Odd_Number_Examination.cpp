#include <iostream>
using namespace std;

main() { 
    int number;
  
    cout<<"Enter an integer : ";
    cin>>number;
  
    if(number%2 == 0) {
        cout<<"Even Number"<<endl;
    } else {
        cout<<"Odd number"<<endl;
    }
  
    system("pause");//system paused
    return 0;
}

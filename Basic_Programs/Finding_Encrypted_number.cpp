#include <iostream>
using namespace std;

main(){
    int number,dig1,dig2,dig3,dig4,number2;
    int x,y,z,t;
    
    cout<<"Enter four digit number:";
    cin>>number;
    
    dig1 = number / 1000;
    
    number = number - (dig1 * 1000);
    dig2 = number / 100;
    
    number = number - (dig2 * 100);
    dig3 = number / 10;
    
    number = number - (dig3 * 10);
    dig4 = number / 1;
    
    x = (dig3 + 7) % 10;
    y = (dig4 + 7) % 10;
    z = (dig1 + 7) % 10;
    t = (dig2 + 7) % 10;
    
    number2 = x * 1000 + y * 100 + z * 10 + t * 1;
    
    cout<<"Encrypted number is "<<number2<<endl;
    
    system("pause");
    return 0;
} 
    
    
    
    
    
    

#include <iostream>
 using namespace std;

main(){
    int number,dig1,dig2,dig3,dig4,number2;
    int x,y,z,t;
    
    cout<<"Enter an encrypted number:";
    cin>>number;
    
    dig1 = number / 1000;
    
    number = number - (dig1 * 1000);
    dig2 = number / 100;
    
    number = number - (dig2 * 100);
    dig3 = number / 10;
    
    number = number - (dig3 * 10);
    dig4 = number / 1;
    
   
    
    x = (dig3 + 3) % 10;
    y = (dig4 + 3) % 10;
    z = (dig1 + 3) % 10;
    t = (dig2 + 3) % 10;
    
    number2 = x * 1000 + y * 100 + z * 10 + t * 1;
    
    cout<<"Decrypted number is "<<number2<<endl;
    
    system("pause");
    return 0;
}

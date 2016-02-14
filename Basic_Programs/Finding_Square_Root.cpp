//this program print the square root of a number
#include <iostream>
using namespace std;

main(){
    int number;
    
    cout<<"Enter a number:";
    cin>>number;
    
    for(int i = 1; i <= number; i++){
        if(number == (i * i)){
            cout<<i<<endl; 
            break;
        }
    }
    
    system("pause");
    return 0;
}

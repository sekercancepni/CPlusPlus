#include <iostream>
using namespace std;
int digit(int);

main(){
    
    int number;
    
    cout<<"Enter an integer : ";
    cin>>number;
    
    cout<<"Number of digit : "<<digit(number)<<endl;
    
    system("pause");
    return 0;
}

int digit(int num){
    
    int counter = 0;
    
    while(num != 0){
        num = num / 10;
        counter++;
    }
    return counter;
}

//this program print perfect number 1 to 1000
#include <iostream>
using namespace std;
int perfect_number(int);

main(){
    
    for(int number = 1; number <= 1000; number++){
        if(perfect_number(number) == number){
            cout<<number<<endl;
        }
    }
    
    system("pause");
    return 0;
}

int perfect_number(int num){
     int result = 0;
     for(int i = 1; i < num; i++){
        if(num % i == 0){
            result = result + i;
        }
     }
     return result;
}

        

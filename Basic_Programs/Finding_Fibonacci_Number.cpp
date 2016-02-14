#include <iostream>
using namespace std;
unsigned long fibonacci(unsigned long);

main(){
    
    for(int num = 0; num <= 10; num++){
        cout<<"fibonacci("<<num<<")="<<fibonacci(num)<<endl;
    }
    system("pause");
    return 0;
}

unsigned long fibonacci(unsigned long number){
    if(number == 0 || number == 1){
        return number;
    }else{
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

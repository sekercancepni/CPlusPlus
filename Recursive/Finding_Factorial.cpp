#include <iostream>
using namespace std;
unsigned long factorial(unsigned long);

main(){
    int number;
    
    for(number = 0; number <= 20; number++){
    
        cout<<number<<"!"<<"="<<factorial(number)<<endl;
    }
    
    system("pause");
    return 0;
}

unsigned long factorial(unsigned long num){
    if(num <= 1){
        return 1;
    }else{
        return num * factorial(num-1);
    }
    return num;
}

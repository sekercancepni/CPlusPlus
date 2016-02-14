#include <iostream>
using namespace std;

main(){
    int number;
    int counter;
    int product;
    
    for(number = 1;number <= 10; number++){
        for(counter = 1; counter <= 10; counter++){
            product = counter * number;
            cout<<number<<"*"<<counter<<"="<<product<<endl;
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}

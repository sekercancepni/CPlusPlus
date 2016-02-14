#include <iostream>
using namespace std;
int is_divisibility_three(int);

main(){
    int num1;
    
    cout<<"Enter a number:";
    cin>>num1;
    
    if(is_divisibility_three(num1)){
        cout<<"Number divides with three."<<endl;
    }else{
        cout<<"Number does not divide with three."<<endl;
    }
    
    system("pause");
    return 0;
}

int is_divisibility_three(int num){
    if(num % 3 == 0){
        return true;
    }
}

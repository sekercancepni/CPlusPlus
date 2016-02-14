#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
void fun(string);

main(){
    
    string A = "1 23 ,4abc2 fun3123 ction22";
    
    fun(A);
    
    system("pause");
    return 0;
}

void fun(string X){
    int size = X.length();
    string number;
    for (int i = 0; i < size; i++) {
        if (isdigit(X[i])) {
            number = number + X[i];
        } else {
            if (number != ""){
                cout<<number<<endl;
                number = "";
            }    
        }
    }
    if (number != ""){
        cout<<number<<endl;
    }
}
            
    

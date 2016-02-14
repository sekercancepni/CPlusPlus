#include <iostream>
using namespace std;
void FUN(int,int,int*,int*);
main(){
    
    int number1,number2,product,sum;
    
    cout<<"Enter two integers : ";
    cin>>number1>>number2;
    
    FUN(number1,number2,&sum,&product);
    
    cout<<"Sum is "<<sum<<endl;
    cout<<"Product is "<<product<<endl;
    
    system("pause");
    return 0;
}
void FUN(int num1,int num2,int *s,int *p){
    *s = num1 + num2;
    *p = num1 * num2;
}

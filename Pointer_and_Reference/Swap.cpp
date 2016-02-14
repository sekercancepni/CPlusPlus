#include <iostream>
using namespace std;
void swap(int*,int*);
main(){
    
    int number1,number2;
    
    cout<<"Enter two integers : ";
    cin>>number1>>number2;
    
    swap(&number1,&number2);
    
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    
    
    system("pause");
    return 0;
}
void swap(int *num1,int *num2){
    int hold = *num1;
    *num1 = *num2;
    *num2 = hold;
}

#include <iostream>
using namespace std;
double combination(int,int);
int factorial(int);
int maximum(int,int);
int minimum(int,int);

int main(){
    
    int number1,number2;
    
    cout<<"Enter two integers : ";
    cin>>number1>>number2;
    
    cout<<"Combination is "<<combination(number1,number2)<<endl;

    system("pause");
    return 0;
}

double combination(int num1,int num2){
    double result;
    int a,b;
    
    a = maximum(num1,num2);
    b = minimum(num1,num2);
    
    result = factorial(a) / (factorial(b) * factorial(a - b));
    return result;
}

int maximum(int a,int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int minimum(int a,int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

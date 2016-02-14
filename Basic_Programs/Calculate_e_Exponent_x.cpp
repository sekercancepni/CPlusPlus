#include <iostream>
#include <cmath>
using namespace std;
double factorial(double);
    
main(){
    double x;
    double sum = 0;
    
    cout<<"Enter x value:";
    cin>>x;
    
    for(int i = 0; i <= 20; i++){
        sum = sum + pow(x,i) / factorial(i);
    }
    cout<<"e^"<<x<<"="<<sum<<endl;
    
    system("pause");
    return 0;
}

double factorial(double num){
    double product;
    for(double number = 1; number <= 20; number++){
        product = 1;
        for(double i = 1; i <= number; i++){
            product = product * i;
        }
    }
    return product;
}

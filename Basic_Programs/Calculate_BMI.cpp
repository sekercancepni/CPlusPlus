#include <iostream>
using namespace std;
double bmi(double,double);

main() {
    double weight;
    double height;
       
    cout<<"Enter the your weight in kilograms : ";
    cin>>weight;
       
    cout<<"Enter the your height in meters : ";
    cin>>height;
       
    if(bmi(weight,height) <= 18.5){
        cout<<"Your are underweight\n";
    }else if(bmi(weight,height) <= 24.9){
        cout<<"You are normal\n";
    }else if (bmi(weight,height) <= 29.9){
        cout<<"You are overweight\n";
    }else{
        cout<<"You are obese\n";
    }
    
    system("pause");
    return 0;
}

double bmi(double w,double h){
    double bmi = w / (h * h);
    return bmi;
}

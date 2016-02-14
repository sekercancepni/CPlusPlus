#include <iostream>
using namespace std;
double reciprocal(int);

main(){
    int num1, num2;

    cout<<"Enter the two numbers : ";
    cin>>num1>>num2;
    
    if(num1 > num2){
        cout<<"num1 must be smaller than num2!"<<endl;
    }else{
        double sum = 0;
        while(num1 <= num2){
            sum += reciprocal(num1);
            num1++;
        }
        cout <<"Sum of reciprocals: "<<sum<<endl;
    }
    
    system("pause");
    return 0;
}

double reciprocal(int number){
    if(number == 0){
        return 0;
    }else{
        return 1.0 / number;
    }
}


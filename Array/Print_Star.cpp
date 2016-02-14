#include <iostream>
using namespace std;
void bar_chart(double[],int);

main(){
    
    const int size = 5;
    
    double A[size] = {2,7,6,5,4};
    
    bar_chart(A,size);
    
    system("pause");
    return 0;
}

void bar_chart(double values[], int AS){
    
    double maximum = values[0];
    
    for(int i = 0; i < AS; i++){
        if(values[i] > maximum){
            maximum = values[i];
        }
    }
    
    for(int i = 0; i < AS; i++){
        double number = (values[i] * 40) / maximum;
        
        for(int j = 1; j <= number; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

    
    
       

#include <iostream>
using namespace std;
void FUN(int[],int,double*);
main(){
    
    const int size = 5;
    double average;
    
    int A[size] = {10,20,30,40,50};
    
    FUN(A,size,&average);
    
    cout<<"Average is "<<average<<endl;

    system("pause");
    return 0;
}
void FUN(int X[],int size,double *average){
    
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += X[i];
    }
    *average = (1.0) * sum / size;
}
        

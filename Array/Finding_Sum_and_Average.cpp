#include <iostream>
using namespace std;

main(){
    
    int A[10] = {1,2,3,4,5,6,78,9,10,234};
    
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        sum += A[i];
    }
    
    double average = sum/10.0;
    
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<average;

    system("pause");
    return 0;
}

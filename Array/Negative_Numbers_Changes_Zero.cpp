#include <iostream>
using namespace std;
void zeros(int[],int);

main(){
    
    const int size = 7;
    
    int A[size] = {10,-1,-2,3,5,-9,4};
    
    for(int i = 0; i < size; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    zeros(A,size);
    
    cout<<endl;
    
    system("pause");
    return 0;
}

void zeros(int X[],int AS){
    
    for(int i = 0; i < AS; i++){
        if(X[i] < 0){
            X[i] = 0;
        }
        cout<<X[i]<<" ";
    }
}

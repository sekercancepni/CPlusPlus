#include <iostream>
using namespace std;

int minimum(int[][5],int,int);

main(){
    
    const int size1 = 4;
    const int size2 = 5;
    
    int A[size1][size2] = {-5,2,-4,4,-1,5,6,-10};
    
    cout<<"Minimum value is "<<minimum(A,size1,size2)<<endl;
    
    system("pause");
    return 0;
}

int minimum(int X[][5],int dim1,int dim2){
    
    int m = X[0][0];
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            if(X[i][j] < m){
                m = X[i][j];
            }
        }
    }
    return m;
}
            

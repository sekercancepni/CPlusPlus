#include <iostream>
using namespace std;
double average(int[][5],int,int);

main(){
    
    const int size1 = 4;
    const int size2 = 5;
    
    int A[size1][size2] = {{11,22,33,44,55},
                           {10,45,66,78,90},
                           {99,-2,45,66,11},
                           {67,47,88,99,-6}};
    
    cout<<"Average is "<<average(A,size1,size2)<<endl;

    system("pause");
    return 0;
}

double average(int X[][5],int dim1,int dim2){
    int sum = 0;
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            sum += X[i][j];
        }
    }
    return (1.0 * sum) / (dim1 * dim2);
}

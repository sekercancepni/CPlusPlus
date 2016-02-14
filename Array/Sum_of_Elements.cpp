#include <iostream>
using namespace std;

int sum(int[][5],int,int);

main(){
    
    int A[4][5] = {2,3,4,5,6,7,8,-2,-3,7};
    
    cout<<"The sum is "<<sum(A,4,5)<<endl;

    system("pause");
    return 0;
}

int sum(int X[][5],int dim1,int dim2){
    int m = 0;
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            m += X[i][j];
        }
    }
    return m;
}

//Write and test a function that takes a square array and then returns the
// sum of the diagonals.
#include <iostream>
using namespace std;
int sum(int[][5],int,int);

main(){
    
    const int dim1 = 5;
    const int dim2 = 5;
    
    int A[dim1][dim2] = {{1,2,3,4,5},
                         {1,2,3,4,5},
                         {5,4,3,2,1},
                         {6,7,8,9,0},
                         {3,3,3,3,3}};
                         
    cout<<"Sum is "<<sum(A,dim1,dim2)<<endl;
                         
    system("pause");
    return 0;
}

int sum(int X[][5], int size1, int size2){
    
    int total = 0;
    
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(i==j || i+j==4){
                total += X[i][j];
            }
        }
    }
    return total;
}

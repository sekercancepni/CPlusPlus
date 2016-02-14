#include <iostream>

using namespace std;

void even_odd(int[][5],int,int);


main(){
    
    const int size1 = 4;
    const int size2 = 5;
    
    int A[size1][size2] = {{1,2,3,4,5},
                           {6,7,8,9,10},
                           {11,12,13,14,15},
                           {16,17,18,19,20}};
    cout<<"Even number : ";
    even_odd(A,size1,size2);
    
    system("pause");
    return 0;
}

void even_odd(int X[][5],int dim1,int dim2){
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            if(X[i][j] % 2 == 0){
                cout<<X[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    
    cout<<"Odd number : ";
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            if(X[i][j] % 2 != 0){
                cout<<X[i][j]<<" ";
            }
        }
    }
}

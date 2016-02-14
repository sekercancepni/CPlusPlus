#include <iostream>
using namespace std;
void maximum(int[][2],int,int,int&,int&,int&);

main(){
    const int size1 = 2;
    const int size2 = 2;
    
    int A[size1][size2] = {{9,2},
                           {3,4}};
    
    int max = A[0][0];
    int index1 = 0;
    int index2 = 0;
    
    maximum(A,size1,size2,max,index1,index2);
    
    cout<<max<<"\t"<<index1<<" "<<index2<<endl;
    
    system("pause");
    return 0;
}

void maximum(int X[][2],int dim1,int dim2,int& max,int& index1,int& index2){
    
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            if(max < X[i][j]){
                max = X[i][j];
                index1 = i;
                index2 = j;
            }
        }
    }
}
    
    
                           
    
    
    
    

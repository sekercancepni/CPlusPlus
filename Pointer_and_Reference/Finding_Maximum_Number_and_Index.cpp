#include <iostream>
using namespace std;
void maximum(int[],int,int&,int&);

main(){
    
    const int size1 = 10;
    const int size2 = 6;
    
    int index,max;
    
    int A[size1] = {1,2,3,4,565,6,7,8,99,-12};
    int B[size2] = {32,55,67,1,3,123};
    
    maximum(A,size1,max,index);
    
    cout<<"Maximum integer of array A is "<<max<<endl;
    cout<<"Index position A array is "<<index<<endl;
    
    maximum(B,size2,max,index);
    
    cout<<"Maximum integer of array B is "<<max<<endl;
    cout<<"Index position B array is "<<index<<endl;
    
    system("pause");
    return 0;
}

void maximum(int X[],int dim,int &max,int &index){
    
    max = X[0];
    index = 0;
    
    for(int i = 0; i < dim; i++){
        if(max <= X[i]){
            max = X[i];
            index++;
        }
    }
}



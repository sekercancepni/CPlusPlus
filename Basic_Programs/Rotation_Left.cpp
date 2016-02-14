#include <iostream>
using namespace std;
void rotate(int[],int[],int,int);
main(){
    
    const int size = 6;
    const int rotation = 7;
    int A[size] = {25,74,36,15,57,40};
    int B[size];
    
    rotate(A, B, size, rotation);
    
    for(int i = 0; i < size; i++){
        cout<<B[i]<<" ";
    }
  
    cout<<endl;
    
    system("pause");
    return 0;
}

void rotate(int X[],int Y[],int dim,int rot){
    
    int a = 0;
        if(rot > dim){
            rot = rot - dim;
        }
        for(int i = 0; i < dim; i++){
            if(rot + i < dim){
                Y[i] = X[rot + i];
            }else{
                Y[i] = X[a];
                a++;
            }
        }
    }


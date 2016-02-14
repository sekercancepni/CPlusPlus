#include <iostream>
using namespace std;
void fun(int[], int[], int, int);

main(){
    
    int A[] = {1,3,5,9,12,38};
    int B[7];
    fun(A,B,6,33);
    
    for(int i = 0; i < 7; i++){
        cout<<B[i]<<" ";
    }

    system("pause");
    return 0;
}

void fun(int X[],int Y[],int index,int number){

    for(int i = 0; i < 7; i++){
        if(i < index){
            Y[i] = X[i];
        }else if(i == index){
            Y[i] = number;
        }else{
            Y[i] = X[i - 1];
        }
    }
}
   

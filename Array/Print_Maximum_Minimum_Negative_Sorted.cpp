//Write a program that uses a loop to read 10 integers from the user, 
//stores the integers in an array and then
// - Finds and prints the maximum integer,
// - Finds and prints the minimum integer,
// - Finds and prints the number of the negative integers,
// - Prints the integers to screen in increasing order.
#include <iostream>
using namespace std;

int main(){
    int limit = 10;
    int A[limit];
    
    for(int i = 0; i < limit ;i++){
        cout<<"Enter "<< i+1 <<". integer :";
        cin>>A[i];
    }
    
    int maximum = A[0];
    
    for(int j = 1; j < limit ;j++){
        if(A[j] > maximum){
            maximum = A[j];
        }
    }
    cout<<"Maximum integer : "<<maximum<<endl;
    
    int minimum = A[0];
    
    for(int k = 1; k < limit ;k++){
        if(A[k] < minimum){
            minimum = A[k];
        }
    }
    
    cout<<"Minimum integer : "<<minimum<<endl;
    
    cout<<"Negative integers : ";
    
    int digit = 0;
    for(int l = 0 ; l < limit ; l++){
        if(A[l] < 0){
            cout<< A[l] <<"  ";
            digit++;
        }
    }
    
    if(digit == 0){
        cout<<"There is not negative integer.";
    }
    
    cout<<endl;
    
    
    //Prints the integers to screen in increasing order
    int temp;
    
    for(int m = 0 ; m < limit ; m++){
        for(int n = 0; n < limit - m - 1; n++){
            if(A[n] > A[n+1]){
                temp = A[n];
                A[n] = A[n + 1];
                A[n + 1] = temp;
            }
        }
     }
     
     cout<<"Increasing order : ";
     for(int i = 0; i < limit; i++){
            cout<<A[i]<<" ";
     }
     cout<< endl;
    
     system("pause");
     return 0;
}

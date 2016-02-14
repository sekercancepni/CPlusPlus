#include <iostream>
using namespace std;
int maximum(int, int, int);
int minimum(int, int, int);

main(){
    int num1,num2,num3;
    
    cout<<"Enter the three numbers:";
    cin>>num1>>num2>>num3;
    
    cout<<"The largest number is "<<maximum(num1, num2, num3)<<endl;
    cout<<"The smallest number is "<<minimum(num1, num2, num3)<<endl;
    
    system("pause");
    return 0;
}

int maximum(int a, int b, int c){
    int largest = a;
    
    if(b > largest){
        largest = b;
    }
    if(c > largest){
        largest=c;
    }
    return largest;
}

int minimum(int a, int b, int c){
    int smallest = a;
    
    if(b < smallest){
        smallest = b;
    }
    if(c < smallest){
        smallest = c;
    }
    return smallest;
}



















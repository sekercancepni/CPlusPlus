#include <iostream>
using namespace std;
int square(int);

main(){
    
    int number;
    
    cout<<"Enter an integer : ";
    cin>>number;
    
    cout<<"Sum of square is "<<square(number)<<endl;
    
    system("pause");
    return 0;
}

int square(int a){
    if(a == 1){
        return 1;
    }else{
        return (a * a) + square(a - 1);
    } 
}

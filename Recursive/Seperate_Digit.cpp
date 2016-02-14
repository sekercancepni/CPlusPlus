#include <iostream>
using namespace std;
void Rev(int);

int main(){
    int number;
    cout<<"Enter a positive integer:";
    cin>>number;
    
    Rev(number);
    
    system("pause");
    return 0;    
}

void Rev(int n){
     if(n>0){
        Rev(n/10);
        cout<<(n/1)%10<<" - ";     
     } 
}

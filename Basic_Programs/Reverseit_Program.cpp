#include <iostream>
using namespace std;
void reverseit(int);

int main(){
    int number;
    
    cout<<"Enter a number : ";
    cin>>number;
    
    cout<<"Inverse : ";
    reverseit(number);
    cout<<endl;
    
    system("pause");
    return 0;
}

void reverseit(int num){
    
    int kalan;
   
    while(num > 10){
        kalan = num % 10;
        num = (num - kalan) / 10;
        cout<<kalan;
    }
    cout<<num;
}

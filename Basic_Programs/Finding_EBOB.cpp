#include <iostream>
using namespace std;
void factorit(int);

main(){
    int number;
    
    cout<<"Enter a positive integer:";
    cin>>number;
    
    if(number <= 0){
        cout<<"You have to enter a positive integer.Exiting!\n";
    }else{
        factorit(number);
    }
    
    system("pause");
    return 0;
}

void factorit(int num){
    int i = 2;
    
    while(i <= num){
        if(num % i == 0){
            num = num / i;
            cout<<i;
            if(num > 1){
                cout<<"x";
            }
        }else{
            i++;
        }  
    }
    cout<<endl;
}

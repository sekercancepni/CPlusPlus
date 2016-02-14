#include <iostream>
using namespace std;
void multiplication_table(int,int);

main(){
    int number;
    int a;
    
    cout<<"Enter an integer 1 to 10 : ";
    cin>>number;
    
    multiplication_table(number <= 5 ? number : 5 , 1);

    if(number>5){
        multiplication_table(number,6);
    }
    
    system("pause");
    return 0;
}

void multiplication_table(int num,int a){
    for(int j = 1; j <= 10; j++){
        for(int i = a; i <= num; i++){
            cout<<i<<"x"<<j<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
    

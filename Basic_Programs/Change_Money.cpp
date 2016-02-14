#include <iostream>
using namespace std;

main(){
    float amount,amount_paid;
  
    cout<<"Enter an amount : ";
    cin>>amount;
  
    cout<<"Enter the amount paid : ";
    cin>>amount_paid;
  
    if(amount_paid > amount){
        cout<<"Change Money : "<<amount_paid - amount<<endl;
    }else if(amount_paid == amount){
        cout<<"You gave complete money."<<endl;
    }else{
        cout<<amount - amount_paid<<"TL missing gave"<<endl;
    }
  
    system("pause");
    return 0;
}

#include  <iostream>
using namespace std;

main(){
    int number = 1;
    int product = 1;

    while(number > 0){
        cout<<"Enter the number(or for exit -1) : ";
        cin>>number;
    
        if(number > 0){
            product = product * number;
        }
    }
    cout<<product<<endl;

    system("pause");
    return 0;
}
    

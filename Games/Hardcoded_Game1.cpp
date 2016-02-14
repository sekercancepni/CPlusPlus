#include <iostream>
using namespace std;

main(){
    int hardcoded;
    
    cout<<"Enter the number : ";
    cin>>hardcoded;
    
    while(hardcoded != 24){
        if(hardcoded > 24){
            cout<<"Enter the more small number : ";
        } else {
            cout<<"Enter the more big number : ";
        }
        cin>>hardcoded;
    }
    
    cout<<"Congratulations.You know true."<<endl;
    
    system("pause");
    return 0;
}
    

#include <iostream>
using namespace std;

main(){
    
    int number;
    
    cout<<"Enter an integer : ";
    cin>>number;
    
    for(int row = 1; row <= number; row++){
        for(int col = 1; col <= number; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int row = 1; row <= number; row++){
        for(int col = 1;col <= number; col++){
            if(col == 1 || col == number || row == 1 || row == number){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}

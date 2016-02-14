#include <iostream>
using namespace std;

main(){
    
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            cout<<"*";
        }
        cout<<" ";
        for(int col = 1; col <= 5; col++){
            if(col == 1 || col == 5 || row == 1 || row == 5){
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

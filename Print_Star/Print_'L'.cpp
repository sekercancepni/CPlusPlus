#include <iostream>
using namespace std;

main(){
    
    for(int row = 1; row <= 10; row++){
        for(int col = 1; col <= 10; col++){
            if(col == 1 || row == 10){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}
            

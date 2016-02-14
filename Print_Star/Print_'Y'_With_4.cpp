#include <iostream>
using namespace std;

main(){
    int col;
    int row = 1;
    
    while(row <= 10){
        col = 1;
        while(col <= 10){
            if(col == 10 || row == 5 || (col == 1 && row <= 5)){
                cout<<"4";
            }else{
                cout<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
    system("pause");
    return 0;
}

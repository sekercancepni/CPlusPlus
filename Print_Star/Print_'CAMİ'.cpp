#include <iostream>
using namespace std;

main() {
    int letter;
    int col;
    int row;
    
    for(letter = 1; letter <= 4; letter++) {
        for(row = 1; row <= 5; row++) {
            for(col = 1; col <= 5; col++) {
                if ((row == 1 || col == 1 || row == 5) && letter == 1) {
                    cout<<"*";
                } else if((col == 1 || col == 5 || row == 1 || row == 3) && letter == 2) {
                    cout<<"*";
                } else if((col == 1 || col == 5 || col == 3 || row == 1) && letter == 3){
                    cout<<"*";
                } else if(col == 3 && letter == 4 && row != 2){
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    
    system("pause");
    return 0;
}
            

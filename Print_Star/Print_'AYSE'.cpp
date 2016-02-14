#include <iostream>
using namespace std;

main()
{
    int letter = 1;
    int row;
    int col;
    
    while(letter <= 4){
        row = 1;
        while(row <= 10){
            col = 1;
            while(col <= 10){
                if((col == 1 || col == 10 || row == 1 || row == 5) && letter == 1){
                    cout<<"*";
                }else if((col == 10 || row == 5 || row == 10 || (col == 1 && row <= 5)) && letter == 2){
                    cout<<"*";
                }else if((row == 1 || row == 10 || row == 5 || (col == 10 && row >= 5)|| (col == 1 && row <= 5)) && letter == 3){
                    cout<<"*";
                }else if((col == 1 || row == 1 || row == 5 || row == 10) && letter == 4){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                col++;
            }
            cout<<endl;
            row++;
        }
        cout<<endl<<endl;
        letter++;
    }
    
    system("pause");
    return 0;
}

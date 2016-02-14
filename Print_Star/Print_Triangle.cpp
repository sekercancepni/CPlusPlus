#include <iostream>
using namespace std;

main(){
    int height;
    
    cout<<"Enter the height of the triangle : ";
    cin>>height;
    
    for(int row = 1; row <= height; row++){
        
        for(int col = 1; col <= (height * 2) - 1; col++){
            if(height - row < col && col < height + row){
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

#include <iostream>
#include <string>
using namespace std;

main(){
    
    string text;
    
    cout<<"Please enter the text : ";
    cin>>text;
    
    int size = text.length();
    
    for(int i = 1; i <= size; i++){
        for(int j = 0; j < size; j++){
            if(i + j <= size){
                cout<<text.substr(j,i)<<endl;
            }
        }
    }

    system("pause");
    return 0;
}

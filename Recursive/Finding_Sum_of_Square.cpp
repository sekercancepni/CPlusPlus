#include <iostream>
using namespace std;
int fun(int);
main(){
    
    int number;
    cout<<"Enter an integer : ";
    cin>>number;
    
    cout<<fun(number)<<endl;
    
    system("pause");
    return 0;
}
int fun(int num){
    if(num == 1){
        return num * num;
    }else{
        return num * num + fun(num - 1);
    }
}

#include <iostream>
using namespace std;

main(){
    
    int year;
    
    cout<<"Enter the year : ";
    cin>>year;
    
    if((year % 4 == 0 || year % 400 == 0) && year % 100 == 0){
        cout<<year<<" is not leap year."<<endl;
    }else{
        cout<<year<<"is leap year."<<endl;
    }
    
    system("pause");
    return 0;
}

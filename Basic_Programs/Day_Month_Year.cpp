#include <iostream>
using namespace std;

main(){ 
    
    int day,month,year;

    cout<<"Enter day : ";
    cin>>day;
  
    cout<<"Enter month : ";
    cin>>month;
  
    cout<<"Enter year : ";
    cin>>year;
  
  
    if(day < 30){ 
        cout<<day+1<<"/"<<month<<"/"<<year<<endl;
    }
    if(day == 30 && month == 12){
        cout<<"1"<<"/"<<"1"<<"/"<<year+1<<endl;
    }
    if(day == 30 && month != 12){ 
        cout<<"1"<<"/"<<month+1<<"/"<<year<<endl;
    }
  
    system("pause");
    return 0;
}

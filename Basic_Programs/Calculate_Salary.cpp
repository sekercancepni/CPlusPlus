#include <iostream>
using namespace std;
int get_total_salary(int);

main(){
    int sales;
    
    cout<<"Enter sales in dolars(-1 to end):";
    cin>>sales;
        
    while(sales!=-1)
    {
        cout<<"Salary is: "<<"$"<<get_total_salary(sales)<<endl;
      
        cout<<"Enter sales in dollars(-1 to end):";
        cin>>sales;
    }
    system("pause");
    return 0;
 
} 
 
int get_total_salary(int wage){
    int salary1 = 200;
    int salary2;
    int gross;
        
    gross = (wage * 9) / 100;
    salary2 = gross + salary1;
        
    return salary2;
}

    
       
    

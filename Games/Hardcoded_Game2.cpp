//this program run hardcoded game
#include <iostream>
using namespace std;

main(){
    
    int hardcoded = 0;
    int number = 1;
    int score = 100;
    
    cout<<"Enter the number : ";
    cin>>hardcoded;
    
    while(hardcoded != 24 && number <= 10){
        if(hardcoded > 24){
            cout<<"Enter the smaller number : ";
        } else {
            cout<<"Enter the bigger number : ";
        }
        cin>>hardcoded;
        
        number++;
        score = score - 10;
    }
    
    if(number <= 10){
        cout<<number<<". denemede bildiniz. "<<score<<" puan aldiniz."<<endl;
    } else {
        cout<<"Toplam 10 hakkiniz bulunmaktadir.Kaybettiniz."<<endl;
    }
    
    system("pause");
    return 0;
}
    

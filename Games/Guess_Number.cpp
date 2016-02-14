#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
    srand(time(0));
    int number = rand()%100 + 1;
    int guess;
    
    do{
        cout<<"Guess the number I have selected : ";
        cin>>guess;
        
        if(number > guess){
            cout<<"Try again with a bigger number\n";
        }else if(number < guess){
            cout<<"Try again with a smaller number\n";
        }else{
            cout<<"Congrulations.You have found the number\n";
        }
    }while(number != guess);
    
    system("pause");
    return 0;
}

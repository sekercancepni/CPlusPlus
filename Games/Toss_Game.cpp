#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
    srand(time(0));
    int money = 100;
    int toss,cont;
    
    while(money > 0){
        toss = rand() % 2;
        if(toss == 0){
            money *= 2;
        }else{
            money /= 2;
        }
    
        cout<<"You now have "<<money<<" liras\n";
        cout<<"Press 1 to continue or exit(-1)?";
        cin>>cont;
    
        if(cont!=1){
            break;
        }
    }
  
    system("pause");
    return 0;
}

        
        

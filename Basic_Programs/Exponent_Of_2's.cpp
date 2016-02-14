#include <iostream>
#include <iomanip>
using namespace std;

main(){
   
    int product = 1;
    
    for(int i = 0; i <= 10; i++){
        cout<<"2^"<<setw(2)<<i<<setw(7)<<"="<<setw(7)<<product<<endl;
        product = product * 2;
    }
    
    system("pause");
    return 0;
}
        

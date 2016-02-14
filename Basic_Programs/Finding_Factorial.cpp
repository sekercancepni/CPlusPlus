#include <iostream>
using namespace std;

main(){
    int number;
    int result = 1;
  
    cout<<"Enter an integer between 0 to 15 : ";
    cin>>number;
  
    for(int i = 1; i <= number; i++){
        result = result * i;
    }
    
    cout<<"\nFactorial : "<<result;
    cout<<"\n";
  
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

main() {
    int number;
    int counter = 0;
  
    cout<<"Enter an integer : ";
    cin>>number;
  
    for(int i = 1; i <= number; i++) {
        if(number % i == 0){
            counter++;
        }
    }
      
    if(counter == 2) {
        cout<<"Prime number."<<endl;
    } else {
        cout<<"Not prime number."<<endl;
    }
    
    system("pause");
    return 0;
}

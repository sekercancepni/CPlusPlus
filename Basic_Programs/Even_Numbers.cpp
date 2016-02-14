//this program prints all the even integers between 0 and 100
#include <iostream>
using namespace std;

main() {
    int count = 0;
       
    while(count <= 100){
        cout<<count<<endl;
        count = count + 2;
    }
    
    system ("pause");
    return 0;
}

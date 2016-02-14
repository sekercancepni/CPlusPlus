#include <iostream>
#include <cmath>
using namespace std;

main(){
    double a,b,c;
    
    cout<<"Enter the coefficients a,b and c : ";
    cin>>a>>b>>c;
    
    if((pow(b,2) - 4*a*c) >= 0){
        cout<<"Root 1 : "<<((-1)*b + sqrt(pow(b,2) - 4*a*c)) / 2*a<<endl;
        cout<<"Root 2 : "<<((-1)*b - sqrt(pow(b,2) - 4*a*c)) / 2*a<<endl;
    }else{
        cout<<"There no real roots."<<endl;
    }
        
    system("pause");
    return 0;
}
    

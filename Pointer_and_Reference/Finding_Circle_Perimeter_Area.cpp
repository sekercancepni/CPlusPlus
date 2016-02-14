#include <iostream>
using namespace std;

void circle(double, double&, double&);

main(){
    
    double radius,circumference,area;
    
    cout<<"Enter radius : ";
    cin>>radius;
    
    circle(radius,circumference,area);
    
    cout<<"Circumference is "<<circumference<<endl;
    cout<<"Area is "<<area<<endl;

    system("pause");
    return 0;
}

void circle(double r, double &c, double &a){
    
    const double PI = 3.1415;
    c = 2 * PI * r;
    a = PI * r * r;
}

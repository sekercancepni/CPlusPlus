#include <iostream>
using namespace std;
double sphere_volume(double);

main(){
    double radius;
    
    cout<<"Enter the radius of the sphere:";
    cin>>radius;
    
    cout<<"The volume of the sphere is "<<sphere_volume(radius)<<endl;
    
    system("pause");
    return 0;
}

double sphere_volume(double radius){
    const double PI = 3.1415;
    double volume = (4/3) * PI * radius * radius * radius;
    return volume;
}

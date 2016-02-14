#include <iostream>
using namespace std;
int cube(int,int *);
main(){
    int number;
    int total = 0;
    
    cout<<"Enter an integer : ";
    cin>>number;
    
    cube(number,&total);
    
    cout<<"Cube is "<<total<<endl;

    system("pause");
    return 0;
}
int cube(int num, int *dim){
    *dim = num * num * num;
}

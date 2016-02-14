#include <iostream>
using namespace std;
void FUN(int&,int&,int&);

int main(){
    int a = 5;
    int b = 1;
    int c = 2;

    cout <<"a = "<< a <<" b = " <<b<<" c = "<<c<<endl;

    FUN(a,b,c);
    
    cout <<"a = "<< a <<" b = " <<b<<" c = "<<c<<endl;

    system("pause");
    return 0;

}

void FUN(int &x,int &y,int &z){
    
    if(x > y){
        int hold = x;
        x = y;
        y = hold;
    }
    if(x > z){
        int hold = x;
        x = z;
        z = hold;
    }
    if(y > z){
        int hold = y;
        y = z;
        z = hold;
    }
}
        
        
    

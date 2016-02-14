#include <iostream>
#include <cmath>
using namespace std;
int separate(int,int&);

int main(){
    
    int number;
    
    cout<<"Enter an integer:";
    cin>>number;
    
    int num;
    int field;
    double taban = 10.0;
    
    while(number > 9){
        field = 0;    
        num = separate(number,field);
        cout<< num <<" - ";
        number = number - (num * pow(taban, field));
        while(number < pow(taban, field - 1) && field > 0) {
            field -= 1;
            cout<<"0 -";
        }
    }
    if (number > 0)
        cout<<number<<" - "<<endl;
    
    system("pause");
    return 0;
}

int separate(int num,int& field){
    if(num != 0){
        num = num / 10;
        field++;
    }
    if (0 <= num && num <= 9){
        return num;
    }
    return separate(num,field);
}

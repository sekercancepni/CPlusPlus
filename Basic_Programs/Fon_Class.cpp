#include <iostream>
using namespace std;

class Fon{
    public:
        Fon(int);
        void add(int);
        void dif(int);
        void product(int);
        void division(int);
        void print();
        void is_negpos();
        void even_odd();
    private:
        int number;
};

Fon::Fon(int n){
    if(-100 <= n && n <= 100){
        number = n;
    }
}

void Fon::even_odd(){
    if(number % 2 == 0){
        cout<<"Even"<<endl<<endl;
    }else{
        cout<<"Odd"<<endl<<endl;
    }
}

void Fon::is_negpos(){
    if(number < 0){
        cout<<"Negative"<<endl;
    }else if(number > 0){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Neutral"<<endl;
    }
}

void Fon::add(int n){
    number += n;
}

void Fon::dif(int n){
    number -= n;
}

void Fon::product(int n){
    number *= n;
}

void Fon::division(int n){
    number /= n;
}

void Fon::print(){
    cout<<number<<endl;
}

main(){
    
    Fon a(10);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    a.add(5);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    a.dif(5);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    a.product(-3);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    a.division(-2);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    a.product(0);
    a.print();
    a.is_negpos();
    a.even_odd();
    
    system("pause");
    return 0;
}

#include  <iostream>
using namespace std;
double average(double, double, double);

main() {
    double math_note;
    double phy_note;
    double chem_note;
    double ortalama;
    char name_and_surname[150000];
       
    cout<<"Math Note : ";
    cin>>math_note;
       
    cout<<"Physic Note : ";
    cin>>phy_note;
       
    cout<<"Chemistry Note : ";
    cin>>chem_note;
       
    cout<<"Average is "<<average(math_note, phy_note, chem_note);
       
    cout<<"\n";
       
    if(average(math_note, phy_note, chem_note) >= 45) {
        cout<<"Congratulations.You pass.";
    }else{
        cout<<"You do not pass.";
    }
       
    cout<<"\n";
       
    cout<<"Name - Surname : ";
    cin>>name_and_surname;
       
    cout<<"\n";
       
    if(average(math_note, phy_note, chem_note) >= 45){
        cout<<"You enrolled new class."<<endl;
    }else{
        cout<<"You enrolled same class."<<endl;
    }
       
    system("pause");
    return 0;
}

double average(double m, double p, double c){
    double average = (m + p + c) / 3;
    return average;
}


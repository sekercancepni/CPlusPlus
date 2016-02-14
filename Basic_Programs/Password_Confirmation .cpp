#include <iostream>
using namespace std;

main(){
  
    int  sifre1,sifre2;
  
    cout<<"Sifre giriniz : ";
    cin>>sifre1;
  
    cout<<"Sifreyi tekrar giriniz : ";
    cin>>sifre2;
  
    if(sifre1==sifre2){
        cout<<"Sifreler ayni."<<endl;
    }else{
        cout<<"Sifreler ayni degil."<<endl;
    }
    
    system ("pause");
    return 0;
}

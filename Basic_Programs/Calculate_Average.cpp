#include <iostream>
using namespace std;

main()
{
    int total = 0;
    int gradecounter = 0;
    int grade;
    double average;
    
    cout<<"Enter grade or -1 to quit : ";
    cin>>grade;
    
    while(grade != -1){
        total = total + grade;
        gradecounter++;
        
        cout<<"Enter grade or -1 to quit : ";
        cin>>grade;
    }
    
    if(gradecounter != 0){
        average = total / gradecounter;
        cout<<"Average is "<<average<<endl;
        cout<<"Total is "<<total<<endl;
    }else{
        cout<<"No grades were entered"<<endl;
    } 
        
    system("pause");
    return 0;
}

        
        

    
    
    
    
    
    
    
    
    

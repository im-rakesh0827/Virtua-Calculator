#include "bits/stdc++.h"
using namespace std;
int main(){
    cout<<"Choose unit :-> 1.Celcius    2.Fahrenheit   3.Kelvin\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    if(choice==1){
        cout<<"Enter value of temp in celcius : ";
        int c; cin>>c;
        cout<<"In which unit you want to convert it :-> 1.Fahrenheit    2.Kelvin\n";
        cout<<"Your choicce : ";
        cin>>choice;
        if(choice==1){
            float f = c*1.8+32;
            cout<<c<<" C = "<<f<<" F"<<"\n";
        }else if(choice==2){
            float k = c+273.15;
            cout<<c<<" C = "<<k<<" K"<<"\n";
        }else{
            cout<<"Invalid choice :\n";
        }
    }else if(choice==2){
        cout<<"Enter value of temp in fahrenheit : ";
        int f; cin>>f;
        cout<<"In which unit you want to convert :-> 1.Celcius  2.Kelvin\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            float c = (f-32)/1.8;
            cout<<f<<" F = "<<c<<" C"<<"\n";
        }else if(choice==2){
            float k = (f-32)/1.8 + 273.15;
            cout<<f<<" F = "<<k<<" K"<<"\n";
        }else{
            cout<<"Invalid choice :  ";
        }
    }else if(choice==3){
        cout<<"Enter value of temp in kelvin : ";
        int k; cin>>k;
        cout<<"In which unit you want to convert :-> 1.Celcius 2.Fahrenheit\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            float c = k-273.15;
            cout<<k<<" K = "<<c<<" C"<<"\n";
        }else if(choice==2){
            float f = (k-273.15)/1.8 + 32;
            cout<<k<<" K = "<<f<<" F"<<"\n";
        }else{
            cout<<"Invalid choice :\n";
        }
    }
    return 0;
}
#include "iostream"
#include "math.h"
using namespace std;
float triangle(int b, int h){
    float area;
    cout<<"\nTriangle : \n";
    cout<<"Enter base : ";
    cin>>b;
    if(b<0){
        cout<<"Invalid input : \n";
    }else{
        cout<<"Enter height : ";
        cin>>h;
        if(h<0){
            cout<<"Invalid input : \n";
        }else{
            area = 0.5*b*h;
            //cout<<"Area = "<<area<<"\n";
            // float circum = b+h;
            // cout<<"Circumference = "<<circum<<"\n";
        }
    }
    return area;
}
float rectangle(int l, int b){
    cout<<"\nRectangle :\n";
    int area;
    cout<<"Enter length : ";
    cin>>l;
    if(l<0){
        cout<<"Invalid input : \n";
    }else{
        cout<<"Enter breadth : ";
        cin>>b;
        if(b<0){
            cout<<"Invalid input : \n";
        }else{
            area = l*b;
            //cout<<"Area = "<<area<<"\n";
            // int circum = l+b;
            // cout<<"Circumference = "<<circum<<"\n";
        }
    }
    return area;
}
float circle(int r){
    cout<<"\nCircle : \n";
    float area;
    cout<<"Enter radius : ";
    cin>>r;
    if(r<0){
        cout<<"Invalid input :\n";
    }else{
        area = 3.14*pow(r, 2);
        //cout<<"Area = "<<area<<"\n";
        // float circum = 2*3.14*r;
        // cout<<"Circumference = "<<circum<<"\n";
    }
    return area;
}
int cube(int a){
    cout<<"Cube : \n";
    int vol;
    cout<<"Enter side : ";
    cin>>a;
    if(a<0){
        cout<<"Invalid input : \n";
    }else{
        vol = pow(a, 3);
        //cout<<"Volume = "<<vol<<"\n";
        // int surface_area = 6*pow(a, 2);
        // cout<<"Surface area = "<<surface_area<<"\n";
        // int circum = 12*a;
        // cout<<"Circumference = "<<circum<<"\n";
    }
    return vol;
}
int cuboid(int l, int b, int h){
    cout<<"Cuboid : \n";
    int vol;
    cout<<"Enter lenght : ";
    cin>>l;
    if(l<0){
        cout<<"Invalid input : \n";
    }else{
        cout<<"Enter breadth : ";
        cin>>b;
        if(b<0){
            cout<<"Invalid input : \n";
        }else{
            cout<<"Enter height : ";
            cin>>h;
            if(h<0){
                cout<<"Invalid input : \n";
            }else{
                vol = l*b*h;
                cout<<"Volume = "<<vol<<"\n";
                int surface_area = 2*(l*b+b*h+l*h);
                cout<<"Surface area = "<<surface_area<<"\n";
                int circum = 4*(l+b+h);
                cout<<"Circumference = "<<circum<<"\n";
            }
        }
    }
    return vol;
}
int main(){
    int choice;
    cout<<"Choose shape : 1.Open shape     2.Close shape\n";
    cout<<"Your choice : ";
    cin>>choice;
    if(choice==1){
        cout<<"Open shape : \n";
        cout<<"Choose shape : 1.Triangle    2.Rectangle    3.Circle\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            int b, h;
            cout<<"Area of triangle : "<<triangle(b, h);
        }else if(choice==2){
            int l, b;
            cout<<"Area of rectangle : "<<rectangle(l, b);
        }else if(choice==3){
            int r;
            cout<<"Area of circle : "<<circle(r);
        }
    }else if(choice==2){
        cout<<"Close shape : \n";
        cout<<"Choose shape : 1.Cube    2.Cuboid    3.Sphere    4.Cylinder\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            int a;
            cout<<"Volume of cube : ";
            cout<<cube(a);
        }else if(choice==2){
            int l, b, h;
            cout<<"Volume of cuboid : ";
            cout<<cuboid(l, b, h);
        }
    }else{
        cout<<"Invalid input : \n";
    }
    int op;
    cout<<"\nChoose : 1.Find more :   2.Exit :\n";
    cout<<"Your option : ";
    cin>>op;
    if(op==1){
        main();
    }else if(op==2){
        cout<<"Good bye : \n";
    }else{
        cout<<"Invalid input : \n";
    }
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"WELCOME TO VIRTUAL CALCULATOR :\n";
    cout<<"What you want to find :\n 1.Area \n 2.Circumference \n 3.Volume \n";
    int choice;
    cout<<"Your choice : ";
    cin>>choice;
    // if(choice==1){
    //     cout<<"Choose shape :\n 1.Triangle\n 2.Rectangle\n 3.Circle\n";
    //     cout<<"Your choice : ";
    //     cin>>choice;
    //     if(choice==1){
    //         cout<<"TRIANGLE : \n";
    //         int l, b, h;
    //         cout<<"Enter length : ";
    //         cin>>l;
    //         if(l<0){
    //             cout<<"Invalid input : \n";
    //         }else{
    //             cout<<"Enter breadth : ";
    //             cin>>b;
    //             if(b<0){
    //                 cout<<"Invalid input : \n";
    //             }else{
    //                 cout<<"Enter height : ";
    //                 cin>>h;
    //                 if(h<0){
    //                     cout<<"Invalid iput : \n";
    //                 }else{
    //                     if((l+b)>h && (l+h)>b && (b+h)>l && (b+l)>h){
    //                         float area_tri = 0.5*b*h;
    //                         cout<<"Area of the triangle is : "<<area_tri<<"\n";
    //                     }else{
    //                         cout<<"Length, braedth and height are invalid :\n";
    //                     }
    //                 }
    //             }
    //         }
    //     }else if(choice==2){
    //         cout<<"RECTANGLE : \n";
    //         int l, b;
    //         cout<<"Enter length : ";
    //         cin>>l;
    //         if(l<0){
    //             cout<<"Invalid input : \n";
    //         }else{
    //             cout<<"Enter breadth : ";
    //             cin>>b;
    //             if(b<0){
    //                 cout<<"Invalid input : \n";
    //             }else{
    //                 float area_rect = l*b;
    //                 cout<<"Area of rectangle is : "<<area_rect<<"\n";
    //             }
    //         }

    //     }else if(choice==3){
    //         cout<<"Circle : \n";
    //         int r;
    //         cout<<"Enter radius of the circle : ";
    //         cin>>r;
    //         if(r<0){
    //             cout<<"Invalid input : \n";
    //         }else{
    //             float area_circle = 3.14*r*r; //3.14*pow(r,2);
    //             cout<<"Area of the circle is : "<<area_circle<<"\n";
    //         }
    //     }
            else if(choice==2){
            cout<<"CIRCUMFERENCE : \n";
            cout<<"Choose shape : \n 1.Triangle\n 2.Rectangle\n 3.Circle";
        //}
    }
    return 0;
}
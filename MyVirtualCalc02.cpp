#include "iostream"
#include "math.h"
using namespace std;
int main(){
    cout<<"\n        WELCOME TO VIRTUAL CALCULATOR     \n\n";
    cout<<"Choose shape :-> 1.Open Shape    2.Close Shape\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    if(choice==1){
        cout<<"Open Shape :\n";
        cout<<"Choose shape :-> 1.Triangle  2.Rectangle   3.Circle\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Triangle :\n";
            cout<<"Enter base of the triangle : ";
            int b; cin>>b;
            if(b<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"Enter height of the triangle : ";
                int h; cin>>h;
                if(h<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Wha you want to finnd :-> 1.Perimeter    2.Area\n";
                    cout<<"Your choice : ";
                    cin>>choice;
                    if(choice==1){
                        float hyp = pow((pow(b, 2) + pow(h, 2)), 0.5);
                        float peri = b+h+hyp;
                        cout<<"Perimeter of the triangle : "<<peri<<"\n";
                    }else if(choice==2){
                        cout<<"Area :\n";
                        float area = 0.5*b*h;
                        cout<<"Area of the triangle : "<<area<<"\n";
                    }else{
                        cout<<"Invalid choice :\n";
                    }
                }
            }
        }else if(choice==2){
            cout<<"Rectangle :\n";
            cout<<"Enter length of the rectangle : ";
            int l; cin>>l;
            if(l<=0){
                cout<<"Invalid iinput :\n";
            }else{
                cout<<"Enter breadth of the rrectangle : ";
                int b; cin>>b;
                if(b<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"What you want to find :-> 1.Perimeter    2.Area\n";
                    cout<<"Your choice : ";
                    cin>>choice;
                    if(choice==1){
                        cout<<"Perimeter :\n";
                        int peri = 2*(l+b);
                        cout<<"Perimeter of the rectangle : "<<peri<<"\n";
                    }else if(choice==2){
                        cout<<"Area :\n";
                        int area = l*b;
                        cout<<"Area of the rectangle : "<<area<<"\n";
                    }else{
                        cout<<"Invalid choice :\n";
                    }
                }
            }
        }else if(choice==3){
            cout<<"Circle :\n";
            cout<<"Enter radius of the circle : ";
            int r; cin>>r;
            if(r<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"What you want to find :-> 1.Circumference    2.Area\n";
                cout<<"Your choice : ";
                cin>>choice;
                if(choice==1){
                    cout<<"Circumference :\n";
                    float circum = 2*3.14*r;
                    cout<<"Circumferece of the circle : "<<circum<<"\n";
                }else if(choice==2){
                    cout<<"Area :\n";
                    float area = 3.14*pow(r, 2);
                    cout<<"Area of the circle : "<<area<<"\n";
                }else{
                    cout<<"Invalid choice :\n";
                }
            }
        }else{
            cout<<"Invalid choice :\n";
        }
    }else if(choice==2){
        cout<<"Close Shape :\n";
        cout<<"Choose shape :-> 1.Cube  2.Cuboid   3.Cylinder   4.Cone    5.Sphere\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Cube :\n";
            cout<<"Enter side of the cube : ";
            int a; cin>>a;
            if(a<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
                cout<<"Your choice : ";
                cin>>choice;
                if(choice==1){
                    cout<<"Volume :\n";
                    int vol = pow(a, 3);
                    cout<<"Volume of the cube : "<<vol<<"\n";
                }else if(choice==2){
                    cout<<"Surface area :\n";
                    int sur_area = 6*(pow(a, 2));
                    cout<<"Surface area of the cube : "<<sur_area<<"\n";
                }else{
                    cout<<"Invalid choice :\n";
                }
            }
        }else if(choice==2){
            cout<<"Cuboid :\n";
            cout<<"Enter length of the cuboid : ";
            int l; cin>>l;
            if(l<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"Enter breadth of the cuboid : ";
                int b; cin>>b;
                if(b<=0){
                    cout<<"Invalid inpput :\n";
                }else{
                    cout<<"Enter height of the cuboid : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
                        cout<<"Your choice : ";
                        cin>>choice;
                        if(choice==1){
                            cout<<"Volume :\n";
                            int vol = l*b*h;
                            cout<<"Volumee of the cuboid : "<<vol<<"\n";
                        }else if(choice==2){
                            cout<<"Surface area :\n";
                            int sur_area = 2*(l*b + b*h + l*h);
                            cout<<"Surface area of the cuboid : "<<sur_area<<"\n";
                        }else{
                            cout<<"Invalid choice :\n";
                        }
                    }
                }
            }
        }else if(choice==3){
            cout<<"Cylinder :\n";
            cout<<"Enter radius of the cylinder : ";
            int r; cin>>r;
            if(r<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"Enter height of the cyinder : ";
                int h; cin>>h;
                if(h<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
                    cout<<"Youor choice : ";
                    cin>>choice;
                    if(choice==1){
                        cout<<"Volume :\n";
                        float vol = 3.14*pow(r, 2)*h;
                        cout<<"Volume of the cylinder : "<<vol<<"\n";
                    }else if(choice==2){
                        cout<<"Surface area :\n";
                        float sur_area = 2*3.13*(r*h + pow(r, 2));
                        cout<<"Surface area of the cylinder : "<<sur_area<<"\n";
                    }else{
                        cout<<"Invalid input :\n";
                    }
                }
            }
        }else if(choice==4){
            cout<<"Cone :\n";
            cout<<"Enter radius of the cone : ";
            int r; cin>>r;
            if(r<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"Enter height of the cone : ";
                int h; cin>>h;
                if(h<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
                    cout<<"Your choice : ";
                    cin>>choice;
                    if(choice==1){
                        cout<<"Volume :\n";
                        float vol = 0.333*3.14*pow(r, 3);
                        cout<<"Volume of the cone : "<<vol<<"\n";
                    }else if(choice==2){
                        cout<<"Surface area :\n";
                        int sl_height = pow((pow(r, 2) + pow(h, 2)), 0.5);
                        float sur_area = 3.14*(pow(r, 2) + r*sl_height);
                        cout<<"Surface area of the cone : "<<sur_area<<"\n";
                    }else{
                        cout<<"Invalid choice :\n";
                    }
                }
            }
        }else if(choice==5){
            cout<<"Sphere :\n";
            cout<<"Enter radius of the sphere : ";
            int r; cin>>r;
            if(r<=0){
                cout<<"Invalid input :\n";
            }else{
                cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
                cout<<"Your choice : ";
                cin>>choice;
                if(choice==1){
                    cout<<"Volume :\n";
                    float vol = 1.33*3.14*pow(r, 3);
                    cout<<"Volume of the sphere : "<<vol<<"\n";
                }else if(choice==2){
                    cout<<"Surface area :\n";
                    float sur_area = 4*3.14*pow(r, 2);
                    cout<<"Surface area of the sphere : "<<sur_area<<"\n";
                }else{
                    cout<<"Invalid choice :\n";
                }
            }
        }else{
            cout<<"Invalid choice :\n";
        }
    }else{
        cout<<"Invalid choice :\n";
    }
    cout<<"\nPress : 1.Continue   2.Exit\n";
    cout<<"Your choice : ";
    cin>>choice;
    if(choice==1){
        main();
    }else if(choice==2){
        cout<<"You have successfully exited :\n";
    }else{
        cout<<"Invalid choice :\n";
        cout<<"You have successfully exited :\n";
    }
    return (0);
}
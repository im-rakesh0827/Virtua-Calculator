#include "iostream"
#include "math.h"
using namespace std;
int main(){
    cout<<"Welcome To Virtual Calculator : \n";
    cout<<"Choose shape :-> 1.Open Shape  2.Close Shape\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    if(choice==1){
        cout<<"Open Shape : \n";
        cout<<"Choose shape :-> 1.Triangle  2.Rectangle  3.Circle\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Triangle :\n";
            cout<<"What you want to find :-> 1.Perimeter  2.Area\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Perimeter : \n";
                cout<<"Enter base of triangle : ";
                int b; cin>>b;
                if(b<=0){
                    cout<<"Invalid input \n";
                }else{
                    cout<<"Enter height of the triangle : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid input  :\n";
                    }else{
                        float hyp = pow((pow(b,2) + pow(h, 2)), 0.2);
                        float perimeter = b+h+hyp;
                        cout<<"Perimeter of the right angle trianle : "<<perimeter<<"\n";
                    }
                }
            }else if(choice==2){
                cout<<"Area  :\n";
                cout<<"Enter base of the triangle : ";
                int b; cin>>b;
                if(b<=0){
                    cout<<"Invalid innput :\n";
                }else{
                    cout<<"Enter height of the triangle : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        float area = 0.5*b*h;
                        cout<<"Area of the triangle : "<<area<<"\n";
                    }
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }else if(choice==2){
            cout<<"Recatngle :\n";
            cout<<"What you want to find :-> 1.Perimeter  2.Area\n";
            cout<<"Your choice  : ";
            cin>>choice;
            if(choice==1){
                cout<<"Perimeter :\n";
                cout<<"Enter length of the rectangle : ";
                int l;  cin>>l;
                if(l<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter breadth of the rectangle : ";
                    int b; cin>>b;
                    if(b<=0){
                        cout<<"Invalid input   :\n";
                    }else{
                        int peri = 2*(l+b);
                        cout<<"Perimeter of the rectangle : "<<peri<<"\n";
                    }
                }
            }else if(choice==2){
                cout<<"Area :\n";
                cout<<"Enter length of the reactangle : ";
                int l; cin>>l;
                if(l<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter breadth of the rectangle : ";
                    int b;  cin>>b;
                    if(b<=0){
                        cout<<"Invalid input  :\n";
                    }else{
                        int area = l*b;
                        cout<<"Area of the rectangle : "<<area<<"\n";
                    }
                }
            }else{
                cout<<"Innvalid choice :\n";
            }
        }else if(choice==3){
            cout<<"Circle :\n";
            cout<<"What you want to find :-> 1.Circumference  2.Area\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Circumference  :\n";
                cout<<"Enter radius of the circle : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid input :\n";
                }else{
                    float circum = 2*3.14*r;
                    cout<<"Circumference of the circle : "<<circum<<"\n";
                }
            }else if(choice==2){
                cout<<"Area :\n";
                cout<<"Enter  radius of the circle : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid input :\n";
                }else{
                    float area = 3.14*pow(r, 2);
                    cout<<"Area of the circle : "<<area<<"\n";
                }
            }
        }else{
            cout<<"Invalid choice  :\n";
        }
    }else if(choice==2){
        cout<<"Close shape :\n";
        cout<<"Choose shape :-> 1.Cube   2.Cuboid   3.Cylinder  4.Cone   5.Sphere\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Cube :\n";
            cout<<"What you want to find :-> 1.Volume     2.Surface area\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Volume :\n";
                cout<<"Enter side of the cube : ";
                int a;  cin>>a;
                if(a<=0){
                    cout<<"Invalid nput  :\n";
                }else{
                    int vol = pow(a, 3);
                    cout<<"Volume oof the cuboid : "<<vol<<"\n";
                }
            }else if(choice==2){
                cout<<"Surface area :\n";
                cout<<"Enter side of the cube : ";
                int a; cin>>a;
                if(a<=0){
                    cout<<"Invalid input :\n";
                }else{
                    int sur_area = 6*(pow(a, 2));
                    cout<<"Surface area of the cube : "<<sur_area<<"\n";
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }else if(choice==2){
            cout<<"Cuboid :\n";
            cout<<"What you want to find :-> 1.Volume   2.Surface area \n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Volume :\n";
                cout<<"Enter length of the cuboid : ";
                int l; cin>>l;
                if(l<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter breadth of the cuboid : ";
                    int b; cin>>b;
                    if(b<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        cout<<"Enter height of the cuboid : ";
                        int h; cin>>h;
                        if(h<=0){
                            cout<<"Invalid input :\n";
                        }else{
                            int vol = l*b*h;
                            cout<<"Volume of the cuboid : "<<vol<<"\n";
                        }
                    }
                }
            }else if(choice==2){
                cout<<"Surface area :\n";
                cout<<"Enter length of the cuboid : ";
                int l; cin>>l;
                if(l<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter breadth of the cuboid : ";
                    int b; cin>>b;
                    if(b<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        cout<<"Enter height of the cuboid : ";
                        int h; cin>>h;
                        if(h<=0){
                            cout<<"Invalid input :\n";
                        }else{
                            int sur_area = 2*(l*b+b*h+l*h);
                            cout<<"Surface area of the cuboid : "<<sur_area<<"\n";
                        }
                    }
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }else if(choice==3){
            cout<<"Cylinder :\n";
            cout<<"What you want to find :-> 1.Volume   2.Surface area\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Volume :\n";
                cout<<"Enter radius of the cylinder : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter height of the cylinder : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        float vol = 3.14*pow(r, 2)*h;
                        cout<<"Volume of the cylinder : "<<vol<<"\n";
                    }
                }
            }else if(choice==2){
                cout<<"Surface area :\n";
                cout<<"Enter radius of the cylinder : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter height of the cylinder : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        float sur_area = 2*3.14*r*h + 2*3.14*pow(r, 2);
                        cout<<"Surface area of the cylinder : "<<sur_area<<"\n";
                    }
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }else if(choice==4){
            cout<<"Cone :\n";
            cout<<"What  you want to find  :-> 1.Volume  2.Surface area\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Volume :\n";
                cout<<"Enter radius of the cone  : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid input :\n";
                }else{
                    cout<<"Enter height of the cone : ";
                    int h;  cin>>h;
                    if(h<=0){
                        cout<<"Invalid input :\n";
                    }else{
                        float volume  = 0.333*3.14*pow(r, 2)*h;
                        cout<<"Volume of the cone : "<<volume<<"\n";
                    }
                }
            }else if(choice==2){
                cout<<"Surface area : ";
                cout<<"Enter radius of the cone : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalid  input :\n";
                }else{
                    cout<<"Enter height of the cone : ";
                    int h; cin>>h;
                    if(h<=0){
                        cout<<"Invalid inpu :\n";
                    }else{
                        float sl_height = pow((pow(r, 2) + (pow(h, 2))), 0.5);
                        float sur_area = 3.14*(pow(r, 2) + r*sl_height);
                        cout<<"Surface  area of the cone  : "<<sur_area<<"\n";
                    }
                }
            }else{
                cout<<"Invalid choice :\n"; 
            }
        }else if(choice==5){
            cout<<"Sphere :\n";
            cout<<"What you want to find :-> 1.Volume   2.Surface area \n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Volume :\n";
                cout<<"Enter radius of the sphere : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"INvalid input :\n";
                }else{
                    float vol =  1.333*3.14*pow(r, 3);
                    cout<<"Volume of the sphere : "<<vol<<"\n";
                }
            }else if(choice==2){
                cout<<"Surface area :\n";
                cout<<"Enter radius of the sphere : ";
                int r; cin>>r;
                if(r<=0){
                    cout<<"Invalidinput :\n";
                }else{
                    float sur_area = 4*3.14*pow(r, 2);
                    cout<<"Surface area of the sphere : "<<sur_area<<"\n";
                }
            }
        }
    }
    cout<<"1.Continue   2.Exit\n";
    cout<<"Your choice : ";
    cin>>choice;
    if(choice==1){
        main();
    }else if(choice==2){
        cout<<"You have successfully exited :\n";
    }else{
        cout<<"Invalid choice :\n";
    }
    return 0;
}
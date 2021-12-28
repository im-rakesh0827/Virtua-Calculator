#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"     WELCOME TO VIRTUAL CALCULATOR ERA \n";
    cout<<"What you want to find :   1.Area     2.Circumference     3.Volume\n";
    int choice;
    cout<<"Your choice : ";
    cin>>choice;
    if(choice==1){
        cout<<"AREA :\n";
        cout<<"Choose shape : 1.Open    2.Closed\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Open shape : \n";
            cout<<"Choose shape : 1.Triangle    2.Rectangle    3.Circle\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Triangle :\n";
                int b, h;
                cout<<"Enter base of the triangle : ";
                cin>>b;
                if(b<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter height of the triangle : ";
                    cin>>h;
                    if(h<0){
                        cout<<"Invalid input :\n";
                    }else{
                        float hyp = sqrt(pow(b, 2)+pow(h, 2));
                        if((b+h)>hyp && (b+hyp)>h && (h+hyp)>b){
                            float area_tri = 0.5*b*h;
                            cout<<"Area of triangle is : "<<area_tri<<"\n";
                        }else{
                            cout<<"Length, breadth and height is invalid : \n";
                        }
                    }
                }
            }else if(choice==2){
                cout<<"Rectangle :\n";
                int l, b;
                cout<<"Enter length of the rectangle : ";
                cin>>l;
                if(l<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter breadth of the rectangle : ";
                    cin>>b;
                    if(b<0){
                        cout<<"Invalid input : \n";
                    }else{
                        float area_rect = l*b;
                        cout<<"Area of rectangle is : "<<area_rect<<"\n";
                    }
                }
            }else if(choice==3){
                cout<<"CIRCLE : \n";
                int r;
                cout<<"Enter radius : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    float area_cir = 3.14*pow(r, 2);
                    cout<<"Area of rectangle is : "<<area_cir<<"\n";
                }
            }else{
                cout<<"Invalid input :\n";
            }
        }else if(choice==2){
            cout<<"Closed Shape : \n";
            cout<<"Choose shape : 1.Cube    2.Cuboid    3.Cylinder    4.Sphere\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"CUBE : \n";
                int a;
                cout<<"Enter side of cube : ";
                cin>>a;
                if(a<0){
                    cout<<"Invalid input : \n";
                }else{
                    float area_cube = 6*a*a;
                    cout<<"Surface area of the cube is : "<<area_cube<<"\n";
                }
            }else if(choice==2){
                cout<<"CUBOID : \n";
                int l, b, h;
                cout<<"Enter length of cuboid : ";
                cin>>l;
                if(l<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter breadth of cuboid : ";
                    cin>>b;
                    if(b<0){
                        cout<<"Invalid input : \n";
                    }else{
                        cout<<"Enter height of cuboid : ";
                        cin>>h;
                        if(h<0){
                            cout<<"Invalid input : \n";
                        }else{
                            float area_cuboid = 2*(l*b+l*h+b*h);
                            cout<<"Surface area of cuboid is : "<<area_cuboid<<"\n";
                        }
                    }
                }
            }else if(choice==3){
                cout<<"CYLINDER : \n";
                int l, r;
                cout<<"Enter length of the cylinder : ";
                cin>>l;
                if(l<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter radius of the cylinder : ";
                    cin>>r;
                    if(r<0){
                        cout<<"Invalid input : \n";
                    }else{
                        float area_curve = 2*3.14*r*l;
                        float area_plane = 2*3.14*pow(r, 2);
                        float area_total = area_curve+area_plane;
                        cout<<"\nCurve surface area of cylinder is : "<<area_curve<<"\n";
                        cout<<"Plane surface area is : "<<area_plane<<"\n";
                        cout<<"Total surface area is : "<<area_total<<"\n";
                    }
                }
            }else if(choice==4){
                cout<<"SPHERE : \n";
                int r;
                cout<<"Enter radius of sphere : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    float area_curve = 4*3.14*pow(r, 2);
                    cout<<"Curve surface area of the sphere is : "<<area_curve<<"\n";
                }
            }
        }
    }else if(choice==2){
        cout<<"CIRCUMFERENCE : \n";
        cout<<"Choose shape : 1.Triangle    2.Rectangle    3.Circle\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Triangle : \n";
            int l, b, h;
            cout<<"Enter length of the triangle : ";
            cin>>l;
            if(l<0){
                cout<<"Invalid input : \n";
            }else{
                cout<<"Enter breadth of the triangle : ";
                cin>>b;
                if(b<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter height of the triangle : ";
                    cin>>h;
                    if(h<0){
                        cout<<"Invalid input : \n";
                    }else{
                        if((l+b)>h && (l+h)>b && (b+h)>l){
                            int circum_tri = l+b+h;
                            cout<<"Circumference of the triangle is : "<<circum_tri<<"\n";
                        }else{
                            cout<<"Length, breadth & height of the triangle id invalid : \n";
                        }
                    }
                }
            }
        }else if(choice==2){
            cout<<"Rectangle : \n";
            int l, b;
            cout<<"Enter legth of the rectangel : ";
            cin>>l;
            if(l<0){
                cout<<"Invalid input : \n";
            }else{
                cout<<"Enter breadth of the rectangle : ";
                cin>>b;
                if(b<0){
                    cout<<"Invalid input :\n";
                }else{
                    int circum_rect = 2*(l+b);
                    cout<<"Circumference of the rectangle is : "<<circum_rect<<"\n";
                }
            }
        }else if(choice==3){
            cout<<"Circle : \n";
            int r;
            cout<<"Enter radius of the circle : ";
            cin>>r;
            if(r<0){
                cout<<"Invalid input : \n";
            }else{
                float circum_cir = 2*3.14*r;
                cout<<"Circumference of the circle is : "<<circum_cir<<"\n";
            }
        }
    }else if(choice==3){
        cout<<"VOLUME :\n";
        cout<<"Choose shape : 1.Cube    2.Cuboid    3.Sphere    4.Cylinder\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"CUBE : \n";
            int a;
            cout<<"Enter side of the cube : ";
            cin>>a;
            if(a<0){
                cout<<"Invalid input : \n";
            }else{
                int vol_cube = pow(a, 3);
                cout<<"Volume of the cube is : "<<vol_cube<<"\n";
            }
        }else if(choice==2){
            cout<<"CUBOID : \n";
            int l, b, h;
            cout<<"Enter length of the cuboid : ";
            cin>>l;
            if(l<0){
                cout<<"Invalid input : \n";
            }else{
                cout<<"Enter breadth of the cuboid : ";
                cin>>b;
                if(b<0){
                    cout<<"Invalidinput : \n";
                }else{
                    cout<<"Enter height of the cuboid : ";
                    cin>>h;
                    if(h<0){
                        cout<<"Invalid input :\n";
                    }else{
                        double vol_cuboid = l*b*h;
                        cout<<"Volume of the cuboid is : "<<vol_cuboid<<"\n";
                    }
                }
            }
        }else if(choice==3){
            cout<<"SPHERE : \n";
            cout<<"Choose shape : 1.Solid Sphere    2.Hollow Sphere\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Solid Sphere : \n";
                int r;
                cout<<"Enter radius of the sphere : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    float vol_solid = 1.333*3.14*pow(r, 3);
                    cout<<"Volume of solid sphere is : "<<vol_solid<<"\n";
                }
            }else if(choice==2){
                cout<<"HOLOW SPHERE :\n";
                int r, R;
                cout<<"Enter inner radius : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter outer radius : ";
                    cin>>R;
                    if(R<0){
                        cout<<"Invalid iput : \n";
                    }else{
                        if(R>r){
                            float outer_vol = (4/3)*3.14*pow(R, 3);
                            cout<<"Outer volume of the sphere is : "<<outer_vol<<"\n";
                            float inner_vol = (4/3)*3.14*pow(r, 3);
                            cout<<"Inner volume of the sphere is : "<<inner_vol<<"\n";
                            float ratio = outer_vol/inner_vol;
                            cout<<"Ratio of outer and innre volume of the hollow sphere is : "<<ratio<<"\n";
                        }else{
                            cout<<"Invalid input : \n"; 
                        }
                    }
                }
            }
        }else if(choice==4){
            cout<<"Cylinder : \n";
            cout<<"Choose shape : 1.Solid Cylinder     2.Hollow Cylinder\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Solid cylinder : \n";
                int r, h;
                cout<<"Enter radius of solid cylinder : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter height of the solid cylinder : ";
                    cin>>h;
                    if(h<0){
                        cout<<"Invalid input : \n";
                    }else{
                        float vol_cyl = 3.14*pow(r, 2)*h;
                        cout<<"Volume of the solid cylinder is : "<<vol_cyl<<"\n";
                    }
                }
            }else if(choice==2){
                cout<<"Hollow cylinde : \n";
                int r, R, h;
                cout<<"Enter inner radius of the cylinder : ";
                cin>>r;
                if(r<0){
                    cout<<"Invalid input : \n";
                }else{
                    cout<<"Enter outer radius of the cylinder : ";
                    cin>>R;
                    if(R<0){
                        cout<<"Invalid input : \n";
                    }else{
                        cout<<"Enter height of the cylinder : \n";
                        cin>>h;
                        if(h<0){
                            cout<<"Invalid input : \n";
                        }else{
                            float vol_outer = 3.14*pow(R, 2)*h;
                            cout<<"Outer volume of the cylinder is : "<<vol_outer<<"\n";
                            float vol_inner = 3.14*pow(r, 2)*h;
                            cout<<"Inner volume of the cylinder is : "<<vol_inner<<"\n";
                            float ratio = vol_outer/vol_inner;
                            cout<<"Ratio of outer and inner volume of the cylinder is : "<<ratio<<"\n";
                        }
                    }
                }
            }
        }
    }
    int op;
    cout<<"\nChoose : 1.Continue :   2.Exit\n";
    cout<<"Your option : ";
    cin>>op;
    if(op==1){
        main();
    }else if(op==2){
        cout<<"Thanks for using this Virtual Calculator : \nGood bye : \n";

    }else{
        cout<<"Invalid input : \n";
    }
    return 0;
}
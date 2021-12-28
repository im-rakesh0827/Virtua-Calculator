print("\n         Welcome To Virtual Calculator :       ")
print("Choose shape : 1.Open        2.Closed")
choice=int(input("Your choice : "))
if(choice==1):
    print("Open Shape : ")
    print("Choose shape : 1.Triangle    2.Rectangle     3.Circle")
    choice=int(input("Your choice : "))
    if(choice==1):
        print("Triangle : ")
        b=int(input("Enter base of the triangle : "))
        if(b<0):
            print("Invalid nput : ")
        else:
            h=int(input("Enter height of the triangle : "))
            if(h<0):
                print("Invalidinput : ")
            else:
                hyp = (b**2+h**2)**0.5
                area = 0.5*b*h
                perim = b+h+hyp
                print("\nArea 0f the triangle : ", area,"\nPerimeter of the traingle : ",perim)
    elif(choice==2):
        print("Rectangle : ")
        l=int(input("Enter lenght of the rectangle : "))
        if(l<0):
            print("Invalid input : ")
        else:
            b=int(input("Enter bredth of the rectangle : "))
            if(b<0):
                print("Invalid input : ")
            else:
                area=l*b
                perim=2*(l+b)
                print("\nArea of the rectangle : ",area,"\nPerimeter of the rectangle : ",perim)
    elif(choice==3):
        print("Circle : ")
        r=int(input("Enter radius of the circle : "))
        if(r<0):
            print("Invalid input : ")
        else:
            area=3.14*r**2
            cir=2*3.14*r
            print("\nArea of the circle : ",area,"\nCircumference of the circle : ",cir)
    else:
        print("Invalid input : ")
elif(choice==2):
    print("Closed Shape : ")
    print("Choose shape : 1.Cube    2.Cuboid    3.Cylinder  4.Sphere")
    choice=int(input("Your choice : "))
    if(choice==1):
        print("Cube : ")
        a=int(input("Enter side of the cube : "))
        if(a<0):
            print("Invalid input : ")
        else:
            vol=a**3
            tsa=6*a**2
            print("\nVolume of the cube : ",vol,"\nSurface area of the cube : ",tsa)
    elif(choice==2):
        print("Cuboid : ")
        l=int(input("Enter length of the cuboid : "))
        if(l<0):
            print("Invalid input : ")
        else:
            b=int(input("Enter breadth of the cuboid : "))
            if(b<0):
                print("Invalid input : ")
            else:
                h=int(input("Enter height of the cuboid : "))
                if(h<0):
                    print("Invalid input : ")
                else:
                    vol=l*b*h
                    tsa=2*(l*b+b*h+l*h)
                    print("\nVolume of the cuboid : ",vol,"\nSurface area of the cuboid : ",tsa)
    elif(choice==3):
        print("Cylinder : ")
        print("Choose shape : 1.Hollow Cylinder     2.Solid Cylinder")
        choice=int(input("Your choice : "))
        if(choice==1):
            print("Hollow Cylinder : ")
            R=int(input("Enter outer radius of the hollow cylinder : "))
            if(R<0):
                print("Invalid input : ")
            else:
                r=int(input("Enter inner radius of the hollow cylinder : "))
                if(r<0):
                    print("Invalid input : ")
                else:
                    if(R<r):
                        print("Invalid radius : \nOuter radius is smaller than inner radius : ")
                    else:
                        h=int(input("Enter height of the cylinder : "))
                        if(h<0):
                            print("Invalid input : ")
                        else:
                            inVol=3.14*r**2*h
                            outVol=3.14*R**2*h
                            ratio=outVol/inVol
                            csa=2*3.14*h*(r+R)
                            psa=2*3.14*(R**2-r**2)
                            tsa=csa+psa
                            print("\nOuter volume of the cylinder : ",outVol,"\nInner volume of the cylinder : ",inVol,"\nRatio : ",ratio,"\nCurve surface area  : ",csa,"\nTotal surface area : ",tsa)
        elif(choice==2):
            print("Solid cylinder : ")
            r=int(input("Enter radius of the cylinder : "))
            if(r<0):
                print("Invalid input : ")
            else:
                h=int(input("Enter height of the cylinder : "))
                if(h<0):
                    print("Invalid input : ")
                else:
                    vol=3.14*r**2*h
                    csa=2*3.14*r*h
                    psa=2*3.14*r**2
                    tsa=psa+csa
                    print("\nVolume of the cylinder : ",vol,"\nCurve surface area : ",csa,"\nTotal surface area : ",tsa)
        else:
            print("Invalid input : ")
    elif(choice==4):
        print("Sphere : ")
        print("Choose shape : 1.Hollow Sphere   2.Solid Sphere")
        choice=int(input("Your choice : "))
        if(choice==1):
            print("Hollow Sphere : ")
            R=int(input("Enter outer radius : "))
            if(R<0):
                print("Invalid input : ")
            else:
                r=int(input("Enter inner radius : "))
                if(r<0):
                    print("Invalid input : ")
                else:
                    if(R<r):
                        print("Invalid rddius : \nOuter radius is smaller than inner radius : ")
                    else:
                        inVol=(4/3)*3.14*r**3
                        outVol=(4/3)*3.14*R**3
                        ratio=outVol/inVol
                        csa=4*3.14*(r**2+R**2)
                        print("\nOuter volume : ",outVol,"\nInner volume : ",inVol,"\nRatio : ",ratio,"\nCurve surface area : ",csa)
        elif(choice==2):
            print("Solid Sphere : ")
            r=int(input("Enter radius of the sphere : "))
            if(r<0):
                print("Invalid input : ")
            else:
                vol=(4/3)*3.14*r**3
                csa=4*3.14*r**2
                print("\nVolume of the sphere : ",vol,"\nCurve surface area : ",csa)
        else:
            print("Invalid input : ")
    else:
        print("Invalid input : ")
else:
    print("Invalid input : ")
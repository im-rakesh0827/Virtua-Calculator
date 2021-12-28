print("\n         Welcome To Virtual Calculator :             ")
print("What you want to calculate : 1.Area     2.Perimeter     3.Volume")
choice=int(input("Your choice : "))
if(choice==1):
    print("Area : ")
    print("Choose shape : 1.Triangle    2.Rectangle     3.Circle")
    choice=int(input("Your choice : "))
    if(choice==1):
        print("Triangle : ")
        base = int(input("Enter base of the triangle : "))
        if(base<0):
            print("Invalid input : \n")
        else:
            height = int(input("Enter height of the triangle : "))
            if(height<0):
                print("Invalid input : \n")
            else:
                area = 0.5*base*height
                print ('Area of the triangle : ',area)
    elif(choice==2):
        print("Rectangle : ")
        len = int(input("Enter length of the rectangle : "))
        if(len<0):
            print("Invalid input :\n")
        else:
            breadth = int(input("Enter breadth of the rectangle : "))
            if(breadth<0):
                print("Invalid input : \n")
            else:
                area = len*breadth
                print("Area of the rectangle : ", area)
    elif(choice==3):
        print("Circle : ")
        r = int(input("Enter radius of the circle : "))
        if(r<0):
            print("Invalid input : \n")
        else:
            area = 3.14*r**2
            print("Area of the circle : ", area)
    else:
        print("Invalid input :\n")
elif(choice==2):
    print("Perimeter : ")
    print("Choose shape : 1.Triangle    2.Rectangle     3.Circle")
    choice=int(input("Your choice : "))
    if(choice==1):
        print("Triangle : ")
        base = int(input("Enter base of the triangle : "))
        if(base<0):
            print("Invalid input : \n")
        else:
            height = int(input("Enter height of the triangle : "))
            if(height<0):
                print("Invalid inout : \n")
            else:
                hyp = (base**2+height**2)**0.5
                perim = base+height+hyp
                print("Perimeter of the triangle : ", perim)
    elif(choice==2):
        print("Rectangle : ")
        len=int(input("Enter length of the rectangle : "))
        if(len<0):
            print("Invalid input : \n")
        else:
            breadth = int(input("Enter breadth of the rectangle : "))
            if(breadth<0):
                print("Invalid input : \n")
            else:
                perim = 2*(len+breadth)
                print("Perimeter of the rectangle : ", perim)
    elif(choice==3):
        print("Circle : \n")
        r=int(input("Enter radius of the circle : "))
        if(r<0):
            print("Invalid input : \n")
        else:
            circum = 2*3.14*r
            print("Circumference of the circle : ", circum)
    else:
        print("Invalid input :\n")
elif(choice==3):
    print("\nVolume : ")
    print("Choose shape : 1.Cube    2.Cuboid    3.Cylinder     4.Sphere")
    choice=int(input("Your choice : "))
    if(choice==1):
        print("Cube : ")
        a=int(input("Entre side of the cube : "))
        if(a<0):
            print("Invalid input : \n")
        else:
            vol = a**3
            print("Volume of the cube : ", vol)
    elif(choice==2):
        print("Cuboid : ")
        l=int(input("Enter length of the cuboid : "))
        if(l<0):
            print("Invalid input : \n")
        else:
            b =int(input("Enter breadth of the cuboid : "))
            if(b<0):
                print("Invalid input : \n")
            else:
                h =int(input("Enter height of the cuboid : "))
                if(h<0):
                    print("Invalid input : \n")
                else:
                    vol=l*b*h
                    print("Volume of the cuboid : ", vol)
    elif(choice==3):
        print("Cylinder : 1.Hollow Cylinder     2.Solid Cylinder ")
        choice=int(input("Your choice : "))
        if(choice==1):
            print("Hollow Cylinder : ")
            R=int(input("Enter outer radius : "))
            if(R<0):
                print("Invalid input : \n")
            else:
                r=int(input("Enter inner radius : "))
                if(r<0):
                    print("Invalid input : ")
                else:
                    if(R<r):
                        print("Invalid input : \nOuter radius is smaller than inner radius : \n")
                    else:
                        h=int(input("Enter height of the hollow cylinder : "))
                        if(h<0):
                            print("Invalid input : \n")
                        else:
                            invol=3.14*r**2*h
                            outvol=3.14*R**2*h
                            ratio = outvol/invol
                            print("\nOuter volume : ",outvol,"\nInner volume : ", invol,"\nRatio : ", ratio)
        elif(choice==2):
            print("Solid Cylinder : ")
            r=int(input("Enter radius of the cylinder : "))
            if(r<0):
                print("Invalid input : \n")
            else:
                h=int(input("Enter height of the cylinde : "))
                if(h<0):
                    print("Invalid input : \n")
                else:
                    vol = 3.14*r**2*h
                    print("Volume of the solid cylinder : ",vol)
    elif(choice==4):
        print("Sphere : ")
        print("Choose shape : 1.Hollow Sphere   2.Solid Sphere ")
        choice=int(input("Your choice : "))
        if(choice==1):
            print("Hollow Sphere : ")
            R=int(input("Enter outer radius : "))
            if(R<0):
                print("Invalid input : \n")
            else:
                r=int(input("Enter inner radius : "))
                if(r<0):
                    print("Invalid input : \n")
                else:
                    if(R<r):
                        print("\nInvalid input :\nOuter radius is smaller than inner radius : \n")
                    else:
                        invol = (4/3)*3.14*r**3
                        outvol = (4/3)*3.14*R**3
                        ratio = outvol/invol
                        print("\nOuter volume : ",outvol,"\ninner volume : ",invol,"\nRatio : ",ratio)
        elif(choice==2):
            print("Solid Sphere : ")
            r=int(input("Enter radius of the sphere : "))
            if(r<0):
                print("Invalid input : \n")
            else:
                vol = (4/3)*3.14*r**3
                print("\nVolume of the solid sphere : ", vol)
        else:
            print("Invalid input : \n")
    else:
        print("Invalid input : \n")
else:
    print("Invalid input :\n")
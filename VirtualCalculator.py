print('\n         WELCOME TO VIRTUAL CALCULATOR          ')
x=input('What you want to calculate circum/area/volume :: ')
if x=='circum' or x=='area' or x=='volume':
    if x=='circum':
        print('CIRCUMFERENCE: ')
        y=input('Choose shape circle/square/rectangle :: ')
        if y=='circle' or y=='square' or y=='rectangle':
            if y=='circle':
                print('CIRCLE: ')
                r=eval(input('Enter radius of the circle : '))
                circum_c=2*3.14*r
                print('Circumference of the circle = ',circum_c)
            elif y=='square':
                print('SQUARE: ')
                a=eval(input('Enter side of the square : '))
                circum_sq=4*a
                print('Circumference of the square = ',circum_sq)
            elif y=='rectangle':
                print('RECTANGLE: ')
                l=eval(input('Enter length of the rectangle : '))
                b=eval(input('Enter breadth of the rectangle : '))
                circum_rect=2*(l+b)
                print('Circumference of the rectangle = ',circum_rect)
            else:
                print('Your data is invalid : ')
        else:
            print('You entered invalid input : ')
    elif x=='area':
        print('AREA: ')
        z=input('Chooose shape circle/square/rectangle/closed_shape : ')
        if z=='circle' or z=='square' or z=='rectangle' or z=='closed_shape':
            if z=='circle':
                print('CIRCLE: ')
                r=eval(input('Enter radius of the circle : '))
                area_c=3.14*r*r
                print('Area of circle = ',area_c)
            elif z=='square':
                print('SQUARE: ')
                a=eval(input('Enter side of the square : '))
                area_sq=a*a
                print('Area of square = ',area_sq)
            elif z=='rectangle':
                print('RECTANGLE: ')
                l=eval(input('Enter length of the rectangle : '))
                b=eval(input('Enter breadth of the rectangle : '))
                area_rect=l*b
                print('Area of the rectangle = ',area_rect)
            elif z=='closed_shape':
                p=input('Choose shape cube/cuboid/cylinder/sphere : ')
                if p=='cube' or p=='cuboid' or p=='cylinder' or p=='sphere':
                    if p=='cube':
                        print('CUBE: ')
                        a=eval(input('Enter side of the cube : '))
                        TSA_cube=6*a*a
                        print('Total are of the cube = ',TSA_cube)
                    elif p=='cuboid':
                        print('CUBOID: ')
                        l=eval(input('Enter length of the cuboid : '))
                        b=eval(input('Enter breadth of the cuboid : '))
                        h=eval(input('Enter height of the cuboid : '))
                        TSA_cuboid=2*(l*b+b*h+l*h)
                        print('Total are of the cuboid = ',TSA_cuboid)
                    elif p=='cylinder':
                        print('CYLINDER: ')
                        r=eval(input('Enter radius of the cylinder : '))
                        d=eval(input('Enter depth of the cylinder : '))
                        CSA_cyl=2*3.14*r*d
                        print('Curve surface area of cylinder = ',CSA_cyl)
                        PSA_cyl=2*3.14*r*r
                        print('Plane surface area = ',PSA_cyl)
                        TSA_cyl=CSA_cyl+PSA_cyl
                        print('Total surface area of cylinder = ',TSA_cyl)
                    elif p=='sphere':
                        print('SPHERE: ')
                        r=eval(input('Enter radius of the sphere : '))
                        CSA_sph=4*3.14*r*r
                        print('CSA of the sphere = ',CSA_sph)
                        TSA_sph=CSA_sph
                        print('TSA of the sphere = ',TSA_sph)
                    else:
                        print('Invalid input : ')
                else:
                    print('Invalid input : ')
            else:
                print('Invalid input : ')
        else:
            print('Invalid input : ')
    elif x=='volume':
        print('VOLUME: ')
        q=input('Choose shape cube/cuboid/cylinder/sphere : ')
        if q=='cube' or q=='cuboid' or q=='cylinder' or q=='sphere':
            if q=='cube':
              a=eval(input('Enter side of the cube : '))
              vol_cube=a*a*a
              print('Volume of the cube = ',vol_cube)
            elif q=='cuboid':
              l=eval(input('Enter lenthe of the cuboid : '))
              b=eval(input('Enter breadth of the cuboid : '))
              h=eval(input('Enter height of the cuboid : '))
              vol_cuboid=l*b*h
              print('Volume of the cuboid = ',vol_cuboid)
            elif q=='cylinder':
              print('CYLINDER: ')
              c=input('Choose one solid_cylinder/hollow_cylinder : ')
              if c=='solid_cylinder' or c=='hollow_cylinder':
                    if c=='solid_cylinder':
                      print('Solid Cylinder: ')
                      r=eval(input('Enter radius of the cylinder : '))
                      d=eval(input('Enter depth of the cylinder : '))
                      vol_scyl=3.14*r*r*d
                      print('Vlume of solid cylinder = ',vol_scyl)
                    elif c=='hollow_cylinder':
                        print('Hollow Cylinder: ')
                        r=eval(input('Enter inner radius of the hollow cylinder : '))
                        R=eval(input('Enter outer radius of the hollow cylinder : '))
                        d=eval(input('Enter depth of the hollow cylinder : '))
                        ivol_hcyl=3.14*r*r*d #ivol = inner volume & hcyl = hollow cylinder
                        print('Inner volume of the hollow cylinder = ',ivol_hcyl)
                        ovol_hcyl=3.14*R*R*d #ovol = outer volume
                        print('Outer volume of the hollow cylinder = ',ovol_hcyl)
                        vol_ratio=ovol_hcyl/ivol_hcyl
                        print('Volume ratio of outer and inner cylinder = ',vol_ratio)
                    else:
                        print('Invalid data: ')
              else:
                  print('Invalid data: ')
            elif q=='sphere':
                print('Sphere: ')
                s=input('Choose solid_sphere/hollow_sphere : ')
                if s=='solid_sphere' or s=='hollow_sphere':
                    if s=='solid_sphere':
                        print('Solid Sphere : ')
                        r=eval(input('Enter radius of the sphere : '))
                        vol_ssphere=(4/3)*3.14*r*r*r
                        print('Volume of solid sphere = ',vol_ssphere)
                    elif s=='hollow_sphere':
                        print('Hollow Sphere : ')
                        r=eval(input('Enter inner radius of the hollow sphere : '))
                        R=eval(input('Enter outer radius of the hollow sphere : '))
                        ivol_hsphere=(4/3)*3.14*r*r*R
                        print('Inner volume of the hollow sphere = ',ivol_hsphere)
                        ovol_hsphere=(4/3)*3.14*R*R*R
                        print('Outer volume of the hollow sphere = ',ovol_hsphere)
                        vol_ratio=ovol_hsphere/ivol_hsphere
                        print('Ratio of outer and inner volume of the hollow sphere = ',vol_ratio)
                    else:
                        print('Invalid data : ')
                else:
                    print('Invalid data : ')
            else:
                print('invalid data : ')
        else:
            print('Invalid data : ')
    else:
        print('Invalid data : ')
else:
    print('Invalid data : ')
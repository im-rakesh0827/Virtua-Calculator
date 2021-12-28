//import java.util.*;
import java.math.MathContext;
import java.util.Scanner;
public class Calc {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome to Virtual Calculator Era");
        System.out.println("Choose shape : 1.open   2.Close");
        System.out.print("Your choice : ");
        int choice = sc.nextInt();
        if(choice==1){
            System.out.println("Open Shape : ");
            System.out.println("Choose shape :\n1.Triangle   2.Rectangle     3.Circle");
            System.out.print("Your choice : ");
            choice = sc.nextInt();
            if(choice==1){
                System.out.println("Triangle : ");
                System.out.print("Enter base : ");
                int b = sc.nextInt();
                if(b<0){
                    System.out.println("Invalid input : ");
                }else{
                    System.out.print("Enter height : ");
                    int h = sc.nextInt();
                    if(h<0){
                        System.out.println("Invalid input : ");
                    }else{
                        float area = 0.5f*b*h;
                        System.out.println("Area of the triangle is : "+area);
                    }
                }
            }else if(choice==2){
                System.out.println("Rectangle : ");
                System.out.print("Enter length : ");
                int l = sc.nextInt();
                if(l<0){
                    System.out.println("Invalid input : ");
                }else{
                    System.out.print("Enter breadth : ");
                    int b = sc.nextInt();
                    if(b<0){
                        System.out.println("Invalid input : ");
                    }else{
                        int area = l*b;
                        System.out.println("Area of the rectangle is : "+area);
                        int circum = 2*(l+b);
                        System.out.println("Circumference of rectangle is : "+circum);
                    }
                }
            }else if(choice==3){
                System.out.println("Circle : ");
                System.out.print("Enter radius : ");
                int r = sc.nextInt();
                if(r<0){
                    System.out.println("Invalid inout : ");
                }else{
                    float area = 3.14f*r*r;
                    System.out.println("Area of the circle is : "+area);
                    float circum = 2*3.14f*r;
                    System.out.println("Circumference of the circle is : "+circum);
                }
            }

        }
    }
    
}

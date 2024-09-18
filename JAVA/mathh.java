import java.util.Scanner;

public class mathh {
    
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the first number: ");
        double x=sc.nextDouble();

        System.out.print("Enter the second number: ");
        double y=sc.nextDouble();

        double z=(x*x)+(y*y);

        System.out.println(Math.max(x, y));
        System.out.println(Math.min(x, y));
        System.out.println(Math.ceil(x));
        System.out.println(Math.ceil(y));
        System.err.println(Math.floor(x));
        System.out.println(Math.floor(y));
        System.out.println(Math.sqrt(z));
        System.out.println(Math.pow(x, y));
        System.out.println(Math.exp(x));
        System.out.println(Math.exp(y));
        System.out.println(Math.log(x));
        System.out.println(Math.log(y));
        System.out.println(Math.rint(x));
        System.out.println(Math.rint(y));
        System.out.println(Math.round(x));
        System.out.println(Math.round(y));
        System.out.println(Math.abs(x));
        System.out.println(Math.abs(y));
        System.out.println(Math.sin(x));
        System.out.println(Math.sin(y));
        System.out.println(Math.cos(x));
        System.out.println(Math.cos(y));
        System.out.println(Math.tan(x));
        System.out.println(Math.tan(y));
        System.out.println(Math.asin(x));
        System.out.println(Math.asin(y));
        System.out.println(Math.acos(x));
        System.out.println(Math.acos(y));
        System.out.println(Math.atan(x));
        System.out.println(Math.atan(y));
        System.out.println(Math.atan2(x, y));

    }
}

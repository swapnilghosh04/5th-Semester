import java.util.Random;

public class randomnumber {

    public static void main(String[] args) {

        Random ran = new Random();

        int x=ran.nextInt();
        double y=ran.nextDouble();
        boolean z=ran.nextBoolean();

        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        
    }
    
}

import java.util.Scanner;

public class project3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter number1:");
        double num1 = input.nextDouble();
        
        System.out.println("Enter number2:");
        double num2 = input.nextDouble();
        
        double sum = num1 + num2;
        double sub = num1 - num2;
        double mul = num1 * num2;
        double div = num1 / num2;
        double mod = num1 % num2;
        
        System.out.println("sum: " + sum);
        System.out.println("sub: " + sub);
        System.out.println("mul: " + mul);
        System.out.println("div: " + div);
        System.out.println("mod: " + mod);
    }
}
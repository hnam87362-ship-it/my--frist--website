import java.util.Scanner;

public class project4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("enter your name:");
        String name = input.nextLine();

        System.out.println("enter your age:");
        int age = input.nextInt();

        System.out.println("enter your height(cm):");
        double heightCm = input.nextDouble();

        System.out.println("enter your weight(kg):");
        double weight = input.nextDouble();

        // تحويل الطول من سم إلى متر
        double heightM = heightCm / 100;

        // حساب الـ BMI باستخدام الطول بالمتر
        double bmi = weight / (heightM * heightM);

        
        System.out.println("my information is:");

        System.out.printf("your name is %s %n", name);
        System.out.printf("your age is %d %n", age);
        System.out.printf("your height is %.2f cm %n", heightCm);
        System.out.printf("your weight is %.2f kg %n", weight);
        System.out.printf("your bmi is %.2f %n", bmi);
    }
}
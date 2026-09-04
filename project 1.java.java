import java.util.Scanner;

public class project1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("enter the grade first subjects");
        int grade = input.nextInt();

        System.out.println("enter the second subject grade");
        int grade2 = input.nextInt();

        System.out.println("enter the third subject grade");
        int grade3 = input.nextInt();

        int sum = grade + grade2 + grade3;
        System.out.println("sum:" + sum);
    }
}
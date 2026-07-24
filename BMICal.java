package LAB_4;

import java.util.Scanner;

public class BMICal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Weight in Pounds: ");
        double weightPounds = sc.nextDouble();

        System.out.print("Enter height in Inches: ");
        double heightInches = sc.nextDouble();

        double weightKg = weightPounds * 0.45359237;
        double heightMeter = heightInches * 0.0254;

        double BMI = weightKg / (heightMeter * heightMeter);

        System.out.println("Your BMI is "+ BMI);
    }
}


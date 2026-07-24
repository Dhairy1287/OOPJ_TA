package LAB_4;
import java.util.Scanner;

public class AddTwoNo{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter First no: ");
        int fno=sc.nextInt();

        System.out.print("Enter Second no: ");
        int sno=sc.nextInt();

        int add=fno+sno;

        System.out.println("Addition of two no: "+add);
    }
}





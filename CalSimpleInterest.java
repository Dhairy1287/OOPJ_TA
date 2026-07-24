package LAB_3;
public class CalSimpleInterest {
 public static void main(String[] args) {
    float principal= 5000, roi= 5, timePeriod=10;
    
    float simpleInterest= (principal*roi*timePeriod)/100;

    System.out.println("Simple Interest:"+simpleInterest);
 }   
}

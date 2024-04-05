import java.io.*;
import java.util.*;

public class ex3 {
    public static void main(String[] args) {
        char operator;
        Double num1, num2, result;
        Scanner input = new Scanner(System.in);
        System.out.println("num1:");
        num1 = input.nextDouble();
        System.out.println("num2:");
        num2 = input.nextDouble();
        result=num1+num2;
        System.out.println(num1+"+"+num2+"="+result);
    }
}

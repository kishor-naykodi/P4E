package com.basics;

public class Operators {

    public static void main(String[] args) {

        System.out.println("THis is the overview on the Operators.");

        //Arithmatic operators
        System.out.println("Arithmatic operations in Java");
        double num1 = 11;
        double num2 = 5;
        System.out.println("num1 = "+ num1 +" & num2 = "+num2);
        System.out.println("The addition is : "+(num1+num2));
        System.out.println("The Substraction is : "+(num1-num2));
        System.out.println("The Division is : "+(num1/num2));
        System.out.println("The multiplication is : "+(num1*num2));

        //Increment and Decrement operators in Java
        System.out.println("\nIncrement and decrement operations in Java");
        int no1 = 5;
        int a = ++no1; //Preincrement
        System.out.println(a);

        int no2 = 5;
        int c = no2++;  //Postincrement
        System.out.println(c+"\n");

        //Operator precedence [BODMAS]
        System.out.println("Expression is (3+2)*5/4" + "\nResult : "+(3+2)*5/4);
    }
}

package com.basics;

public class TypeCasting {
    public static void main(String[] args) {

        System.out.println("Typecasting in Java.");

        int a=3;
        double b =3.45;
        //Implicit Type casting
        double c = a + b;
        System.out.println(c);
        //Explicit Type casting
        int d = a + (int)b;
        System.out.println(d);

        //Typecasting using class methods
        String str = "33";
        int add = 22 + Integer.parseInt(str);
        System.out.println("The addition is "+add);

    }
}

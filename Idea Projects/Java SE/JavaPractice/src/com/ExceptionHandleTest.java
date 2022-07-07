package com;

public class ExceptionHandleTest {
    public static void main(String[] args) {
        int x =15;
        int y = 1;
        try{
            System.out.println("x/y:"+x/y);
            System.out.println("x*y:"+x*y);
        }catch (ArithmeticException ae){

            System.out.println("An exception occured:"+ae);
        }catch (ArrayIndexOutOfBoundsException oe){
            System.out.println("An exception occured:"+ oe);
        }finally {
            System.out.println("finally block must e executed!");
        }
        System.out.println("x-y:"+(x-y));
    }
}

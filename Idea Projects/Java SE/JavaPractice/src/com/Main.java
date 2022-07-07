package com;

class Main{
    public static void main(String[] args) {
        String str = new String("Java8");
        StringBuilder strBuilder = new StringBuilder("JSP");
        strBuilder.append("EJB");
        strBuilder.append(str);
        System.out.println(strBuilder);
    }
}
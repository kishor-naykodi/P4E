package com.basics;

import java.text.NumberFormat;

public class FormatNumbers {

    public static void main(String[] args) {
       NumberFormat currency = NumberFormat.getCurrencyInstance();
       String result =currency.format(12345678.9578);
       System.out.println(result);

//       NumberFormat percent = NumberFormat.getPercentInstance();
//       String result2 = percent.format(0.5);
//        System.out.println(result2);

        //Using function chaining
        System.out.println(NumberFormat.getPercentInstance().format(0.5));
    }
}

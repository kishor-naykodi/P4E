package com.Interface;

public class main {
    public static void main(String[] args) {
        var calculator = new TaxCalculator2018(100000);
        var taxReport = new TaxReport();
        taxReport.show(calculator);
    }
}

package com.osaycode;

import java.text.NumberFormat;

public class Main {

    public static void main(String[] args) {
        System.out.println(NumberFormat.getCurrencyInstance().format(100234567.891)); //sout: $100,234,567.89

        String result2 = NumberFormat.getPercentInstance().format(0.1);
        System.out.println(result2);

    }
}

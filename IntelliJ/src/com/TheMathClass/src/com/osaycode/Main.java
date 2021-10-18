package com.osaycode;

public class Main {

    public static void main(String[] args) {
        int result = 2 + (int)(Math.random() * 10);
        //System.out.println(result);
        System.out.println((int)getRandom(1, 6));

    }
    public static double getRandom(double min, double max) {
        return (Math.random() * (max + 1 - min)) + min;
    }
}

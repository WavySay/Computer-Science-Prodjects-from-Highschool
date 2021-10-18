package com.osaycode;

import java.util.Date;

public class Main {

    public static void main(String[] args) {
        byte age = 30; //Int works as well but only 1 byte is needed, hence the data type 'byte'.
        long veiwsCount = 3_123_456_789L; //Sees as int specifiy long
        float price = 10.99F; //Sees as double specifiy float
        char letter = 'A';
        boolean isEligable = false;
	    System.out.println(age);

        Date now = new Date();
        now.getTime();
        System.out.println(now);//sout
    }
}

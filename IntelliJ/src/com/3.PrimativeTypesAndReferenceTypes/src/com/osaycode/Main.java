package com.osaycode;

import java.awt.*;

public class Main {

    public static void main(String[] args) {
        //primitive for simple values
        //reference for complex objects
        //byte a = 1;
        //byte b = a; //if a is changed, b is not affected

        Point point1 = new Point(1,1);
        Point point2 = point1;
        point1.x = 2;
        System.out.println(point2);
    }
}

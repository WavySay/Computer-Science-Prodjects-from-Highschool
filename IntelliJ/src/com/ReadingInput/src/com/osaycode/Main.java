package com.osaycode;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /*Scanner scanner = new Scanner(System.in);
        System.out.print("Input: ");
        byte age = scanner.nextByte();
        System.out.println("You are " + age + " years old!");*/

        Scanner scanner = new Scanner(System.in);
        System.out.print("Input name: ");
        String Name = scanner.nextLine().trim();
        System.out.println("Hello " + Name + "!");
    }
}

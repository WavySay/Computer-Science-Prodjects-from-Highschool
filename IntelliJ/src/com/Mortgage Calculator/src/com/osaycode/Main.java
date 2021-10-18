package com.osaycode;

import java.text.NumberFormat;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Principal: ");
        String principal = scanner.nextLine().trim();
        System.out.print("Annual Interest Rate: ");
        String rate = scanner.nextLine().trim();
        System.out.print("Period (Years): ");
        String years = scanner.nextLine().trim();

        int x = (Integer.parseInt(principal));
        double y = ((Integer.parseInt(rate) / 100) / 12); //monthly interest rate
        int z = (Integer.parseInt(years) * 12); //monthly payments
        double yPlus = y + 1;

        double top = x * (y * Math.pow(yPlus, z));
        double bottom = (Math.pow(yPlus, z) - 1);
        double ans = (top / bottom);
        NumberFormat ansDollar = NumberFormat.getCurrencyInstance();
        System.out.print("Mortgage: " + ansDollar.format(ans));


    }
}

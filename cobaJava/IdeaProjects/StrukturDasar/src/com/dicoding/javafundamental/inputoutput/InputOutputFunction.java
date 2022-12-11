package com.dicoding.javafundamental.inputoutput;

import java.util.Scanner;

public class InputOutputFunction {
    public static void main(String[] args) {
        Scanner scannerA = new Scanner(System.in);
        int valueA, valueB, resultC;
        System.out.println("Program penjumlahn sangat sederhana");

        System.out.print("Masukan Angka pertama : ");
            valueA = scannerA.nextInt(); //untuk input dibatasi hanya 10 digit // nextInt digunakan karena data berbasis integer
        System.out.print("Masukan Angka kedua : ");
            valueB = scannerA.nextInt(); //untuk input dibatasi hanya 10 digit
            resultC = valueA + valueB;
        System.out.println("Hasilnya adalah : " + resultC);
    }
}

package com.dicoding.javafundamental.inputoutput;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class UserBufferedReader {
    public static void main(String[] args) {
        InputStreamReader streamReaderA = new InputStreamReader(System.in);
        BufferedReader bufferedReaderB = new BufferedReader(streamReaderA);
        System.out.println("Program penjumlahan sangat sederhana");
        int valueA = 0;
        int valueB = 0;
        try {
            System.out.print("Masukkan Angka Pertama : ");
                valueA = Integer.parseInt(bufferedReaderB.readLine());
            System.out.print("Masukkan Angka Kedua : ");
                valueB = Integer.parseInt(bufferedReaderB.readLine());

        } catch (IOException e) {
            e.printStackTrace();
        }
        int resultC = valueA + valueB;
        System.out.println("Hasilnya adalah : " + resultC);
    }
}

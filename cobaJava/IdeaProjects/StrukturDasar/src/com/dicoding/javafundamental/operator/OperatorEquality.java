package com.dicoding.javafundamental.operator;

public class OperatorEquality {
    public static void main(String[] args) {
        int valueA = 5, valueB = 4;
        boolean resultC;
        resultC = valueA == valueB;

        System.out.println("Keterangan : valueA = 5 ; valueB = 4");
        System.out.println();

        System.out.println("Hasil 'valueA == valueB' adalah " + resultC);
        System.out.println();

        System.out.println("Tidak sama dengan..");
        resultC = valueA != valueB;
        System.out.println("Hasil 'valueA != valueB' adalah " + resultC);
        System.out.println();

        System.out.println("Lebih besar dari..");
        resultC = valueA >= valueB;
        System.out.println("Hasil 'valueA > valueB' adalah " + resultC);
        System.out.println();

        System.out.println("Sama atau lebih besar dari..");
        resultC = valueA >= valueB;
        System.out.println("Hasil 'valueA >= valueB' adalah " + resultC);
        System.out.println();

        System.out.println("Kurang dari..");
        resultC = valueA < valueB;
        System.out.println("Hasil 'valueA < valueB adalah " + resultC);
        System.out.println();

        System.out.println("Sama atau kurang dari..");
        resultC = valueA <= valueB;
        System.out.println("Hasil 'valueA <= valueB' adalah " + resultC);
        System.out.println();
    }
}

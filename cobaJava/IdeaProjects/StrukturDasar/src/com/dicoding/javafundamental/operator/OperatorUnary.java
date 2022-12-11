package com.dicoding.javafundamental.operator;

public class OperatorUnary {
    public static void main(String[] args) {
        System.out.println("Operator Unary Plus");
        int nilaiAwal = 5;
        int hasil = +nilaiAwal; //untuk membuat variabel baru harus declare type data terlebih dahulu
        System.out.println("Hasil +5 = " + hasil);
        System.out.println();

        System.out.println("Operator Unary Minus");
        int nilaiAwal2 = 5;
        nilaiAwal2 = -nilaiAwal2; //karena variabel sudah di declare di baris sebelumnya, maka tidak perlu di diclare ulang
        System.out.println("Hasil -5 = " + nilaiAwal2);
        System.out.println();

        System.out.println("Operator peningkatan nilai sebesar 1 poin");
        int nilaiAwal3 = 5;
        nilaiAwal3++; //tidak perlu declare type data dan variabel
        System.out.println("Hasil 5++ = " + nilaiAwal3);
        System.out.println();

        System.out.println("Operator pengurangan nilai sebesar 1 poin");
        int nilaiAwal4 = 5;
        nilaiAwal4--; //tidak perlu declare type data dan variabel
        System.out.println("Hasil 5-- = " + nilaiAwal4);
        System.out.println();

        System.out.println("Operator komplemen logika");
        boolean sukses = true;
        System.out.println("Hasil !true = " + !sukses);
        System.out.println();
    }
}

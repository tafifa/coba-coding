package com.dicoding.javafundamental.percabangan;

public class ifThenElseifThenElse {
    public static void main(String[] args){
        int nilaiUN = 76 ;
        String indeksNilai;

        if (nilaiUN == 100) {
            indeksNilai = "A";
        } else if (nilaiUN >= 90) {
            indeksNilai = "B";
        } else if (nilaiUN >= 80) {
            indeksNilai = "C";
        } else if (nilaiUN >= 70) {
            indeksNilai = "D";
        } else {
            indeksNilai = "Maaf kamu tidak lulus";
        } System.out.println("Hasil UN kamu adalah " + indeksNilai);
    }
}

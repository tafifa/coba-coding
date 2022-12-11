package com.dicoding.javafundamental.array;

public class loopingArray {
    public static void main(String[] args) {
        int[] arrayA = new int[101];

        for (int x = 0; x < arrayA.length; x++) {
            arrayA[x] = x + 1;
            System.out.println(arrayA[x]);
        }
    }
}

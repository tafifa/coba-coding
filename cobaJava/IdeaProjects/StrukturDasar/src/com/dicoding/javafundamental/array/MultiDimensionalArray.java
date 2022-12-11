package com.dicoding.javafundamental.array;

public class MultiDimensionalArray {
    public static void main(String[] args){
        String[][] Val = new String[2][];
        Val[0] = new String[2];
        Val[1] = new String[3];

        Val[0][0] = "aku";
        Val[0][1] = "kamu";
        Val[1][0] = "dia";
        Val[1][1] = "kami";

        System.out.println(Val[0][0]);
        System.out.println(Val[0][1]);
        System.out.println(Val[1][0]);
        System.out.println(Val[1][1]);
    }
}
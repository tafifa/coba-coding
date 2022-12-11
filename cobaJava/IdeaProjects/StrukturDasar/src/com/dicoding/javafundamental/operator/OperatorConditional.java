package com.dicoding.javafundamental.operator;

public class OperatorConditional {

    public static void main(String[] args) {
        int valueA = 4, valueB = 5;

        System.out.println("Conditional AND");
        boolean resultA = valueA == 3 && valueB == 5;
        boolean resultB = valueA != 3 && valueB == 5;
        System.out.println("Hasil Operator AND pada syarat value == 3 dan anotherValue == 5 adalah " + resultA);
        System.out.println("Hasil Operator AND pada syarat value != 3 dan anotherValue == 5 adalah " + resultB);
        System.out.println();

        System.out.println("Conditional OR");
        resultA = valueA == 3 || valueB == 5;
        resultB = valueA != 3 || valueB == 5;
        System.out.println("Hasil Operator OR pada syarat value == 3 dan anotherValue == 5 adalah " + resultA);
        System.out.println("Hasil Operator OR pada syarat value != 3 dan anotherValue == 5 adalah " + resultB);
        System.out.println();
    }
}
package com.dicoding.javafundamental.collection;

import java.util.ArrayList;
import java.util.List;

public class ListPlanet {
    public static void main(String[] args)
    {
        List<String> nmPlnt = new ArrayList<>();
        nmPlnt.add("");
        nmPlnt.add("mercury");
        nmPlnt.add("venus");
        nmPlnt.add("earth");
        nmPlnt.add("moon");
        nmPlnt.add("mars");

        System.out.println("Nama-nama planet awal :");
        for (int i = 1; i < nmPlnt.size(); i++) {
            System.out.println("\t planet ke-" + i + " = " + nmPlnt.get(i));
        }

        System.out.println();

        nmPlnt.remove("moon");
        System.out.println("Nama-nama planet akhir :");
        for (int i = 1; i < nmPlnt.size(); i++) {
            System.out.println("\t planet ke-" + i + " = " + nmPlnt.get(i));
        }
    }
}

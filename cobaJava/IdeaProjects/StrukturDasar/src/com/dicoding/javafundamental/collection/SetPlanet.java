package com.dicoding.javafundamental.collection;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class SetPlanet {
    public static void main(String[] args)
    {
        Set<String> nmPlnt = new HashSet<>();

        nmPlnt.add("");
        nmPlnt.add("mercury");
        nmPlnt.add("venus");
        nmPlnt.add("earth");
        nmPlnt.add("earth");
        nmPlnt.add("moon");
        nmPlnt.add("mars");

        System.out.println("Nama-nama planet awal :" + "(size = " + nmPlnt.size() + ")");
        for (String Plnt : nmPlnt) {
            System.out.println("\t" + Plnt);
        }

        nmPlnt.remove("moon");

        System.out.println("\nNama-nama planet akhir :" + "(size = " + nmPlnt.size() + ")");
        for (Iterator ukrnPlnt = nmPlnt.iterator(); ukrnPlnt.hasNext(); ) {
            System.out.println("\t" + ukrnPlnt.next());
        }
    }
}

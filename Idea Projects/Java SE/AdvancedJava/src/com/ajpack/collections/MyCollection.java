package com.ajpack.collections;

import java.util.*;

public class MyCollection{

    public static void show(){
        Set<Integer> setObj = new HashSet<>();

        Collections.addAll(setObj,1,23,4,5,5,6,6,6,6,6);
        System.out.println(setObj);
    }

}

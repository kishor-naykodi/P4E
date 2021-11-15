package com.ajpack.collections;

import java.net.Inet4Address;
import java.util.*;

public class CollectionDemo {
  public static void show() {

    var c1 = new Customer("a","e1");
    var c2 = new Customer("b","e2");
    var c3 = new Customer("c","e3");

    Map<String,Customer> map = new HashMap<>();

    map.put(c1.getEmail(),c1);
    map.put(c2.getEmail(),c2);
    map.put(c3.getEmail(),c3);

    System.out.println(map);

    for (var m: map.values()
         ) {
      System.out.println(m);
    }


  }
}



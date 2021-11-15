package com.ajpack.lambdas;

import java.util.function.*;

public class LambdasDemo {

  public static void show() {

    BinaryOperator<Integer> add = (a,b) -> a+b;

    Function<Integer,Integer> square = a -> a*a;

    int result = add.andThen(square).apply(1,2);
    System.out.println(result);
  }

}

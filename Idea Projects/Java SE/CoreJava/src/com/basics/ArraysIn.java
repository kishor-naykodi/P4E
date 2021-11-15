package com.basics;

import java.util.Arrays;

public class ArraysIn {
    public static void main(String[] args) {

        int[] numbers = new int[5];
        numbers[0] = 1;
        numbers[1] = 5;
        numbers[2] = 10;
        System.out.println(Arrays.toString(numbers));

        String[] str = {"Kishor","Abhi","harry"};
        System.out.println(Arrays.toString(str));

        //Multidimensional array
        int[][] arr2D = new int[3][3];
        arr2D[0][0]=11;
        System.out.println(Arrays.deepToString(arr2D));

        int[][] arr3D = {{1,2,3},{7,8,9}};
        System.out.println(Arrays.deepToString(arr3D));
        
    }
}

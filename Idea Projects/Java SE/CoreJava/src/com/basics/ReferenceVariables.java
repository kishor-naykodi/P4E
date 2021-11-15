package com.basics;

import java.awt.*;
import java.util.Date;

public class ReferenceVariables {
    public static void main(String[] args) {

        byte age = 30;
        Date now = new Date();
        System.out.println(now);

        //Why we say these variables as reference variable ===>
        //Here point 1 referencing to the point object not storing the value but storing the address of point variable.
        Point point1 = new Point(3,5);  //So that we call object is reference of class.
        Point point2 = point1;
        point1.x =7;
        System.out.println(point2);
    }
}

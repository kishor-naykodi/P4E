package com.shape;

class Circle{
    public int radius;
    Circle(int r){
        this.radius = r;
    }

    public double area(){
        return Math.PI*this.radius*this.radius;
    }
}


class Sphere extends Circle{

    Sphere(int radius){
        super(radius);
    }

    public double areaSphere(){
        double area = 4*Math.PI*radius*radius;
        System.out.println("The Surface Area of spehre is : "+ area);
        return area;
    }

    public double volumeSphere(){
        double volume = (4/3)*Math.PI*radius*radius*radius;
        System.out.println("The colume of shpere is : "+ volume);
        return volume;
    }


}

class Cylinder extends Circle{
    public int height;
    Cylinder(int r, int h){
        super(r);
        this.height = h;
    }
    public double volume(){
        return Math.PI*this.radius*this.radius*this.height;
    }
}

class Rectangle1{

    private int length;
    private int breadth;

    public void setLengthBreadth(int length,int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public int getLength() {
        return length;
    }

    public int getBreadth() {
        return breadth;
    }

    void areaRect(){
        System.out.println("The area of Rectandle is : "+length*breadth);
    }
}

class Cuboid extends Rectangle1{

    private int height;

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    void surAreaCuboid(){
        int area=(2*getLength()*getBreadth())+(2*getLength()+getHeight())+(2*getHeight()*getBreadth());
        System.out.println("The Surface Area of Cuboid is : "+ area);
    }

    void volumeCuboid(){
        System.out.println("The volume of Cuboid is : "+(getLength()*getBreadth()*getHeight()));
    }
}

public class Exercise5 {

    public static void main(String[] args) {

        Cylinder obj = new Cylinder(12, 4);
        Sphere sphere = new Sphere(5);
        sphere.areaSphere();

        Rectangle1 rect = new Rectangle1();

        rect.setLengthBreadth(10,5);
        rect.areaRect();


        Cuboid cube1 = new Cuboid();

        cube1.setLengthBreadth(15,7);
        cube1.setHeight(10);
        cube1.surAreaCuboid();
        cube1.volumeCuboid();

    }
}

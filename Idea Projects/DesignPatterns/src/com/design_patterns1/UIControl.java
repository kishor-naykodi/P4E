package com.design_patterns1;

public abstract class UIControl {
    public void enable(){
        System.out.println("Enabled");
    }

    public abstract void draw();
}

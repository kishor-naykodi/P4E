package com.design_patterns1.strategy;

public class BlackAndWhite implements Filter{
    @Override
    public void apply(String fileName) {
        System.out.println("Applying B&W filter");
    }
}

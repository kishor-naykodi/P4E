package com.design_patterns1.strategy;

public class ImageStorage {
    public void store(String fileName,Compressor compressor,Filter filter){
        compressor.compress(fileName);
        filter.apply(fileName);
        System.out.println(fileName + " image stored successfully.");
    }
}

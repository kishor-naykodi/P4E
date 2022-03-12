package com.design_patterns2.proxy;

import java.util.HashMap;
import java.util.Map;

public class Library {
    private Map<String,Ebook> ebooks = new HashMap<>();

    public void add(Ebook ebook){
        ebooks.put(ebook.getFileName(),ebook);
    }

    public void openEbook(String fileName){
        ebooks.get(fileName).show();
    }
}

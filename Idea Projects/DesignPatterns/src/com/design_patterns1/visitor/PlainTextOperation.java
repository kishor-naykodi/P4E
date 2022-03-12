package com.design_patterns1.visitor;

public class PlainTextOperation implements Operation{
    @Override
    public void apply(HeadingNode headingNode) {
        System.out.println("text-heading");
    }

    @Override
    public void apply(AnchorNode anchor) {
        System.out.println("text-anchor");
    }
}

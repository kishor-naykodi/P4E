package com.design_patterns1.visitor;

public class HightlightOperation implements Operation{
    @Override
    public void apply(HeadingNode headingNode) {
        System.out.println("Highlight-heading");
    }

    @Override
    public void apply(AnchorNode anchor) {
        System.out.println("Highligh-anchor");
    }
}

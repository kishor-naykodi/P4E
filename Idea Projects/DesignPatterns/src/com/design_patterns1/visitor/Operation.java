package com.design_patterns1.visitor;

public interface Operation {
    void apply(HeadingNode headingNode);
    void apply(AnchorNode anchor);
}
